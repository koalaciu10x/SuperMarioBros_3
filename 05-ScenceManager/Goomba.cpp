#include "Goomba.h"
CGoomba::CGoomba()
{
	type = GOOMBA;
	category = ENEMY;
	SetState(ENEMY_STATE_MOVE);
}

void CGoomba::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x;
	right = x + GOOMBA_BBOX_WIDTH;
	bottom = y + GOOMBA_BBOX_HEIGHT;

	if (ani == GOOMBA_ANI_DIE_BY_CRUSH)
		top = y + (GOOMBA_BBOX_HEIGHT - GOOMBA_BBOX_HEIGHT_DIE_BY_CRUSH);
	else
		top = y;
}

void CGoomba::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	CGameObject::Update(dt, coObjects);
	vy += MARIO_GRAVITY * dt;

	if (GetTickCount() - dieTime >= 150)
		isFinishedUsing = true;

	vector<LPCOLLISIONEVENT> coEvents;
	vector<LPCOLLISIONEVENT> coEventsResult;

	coEvents.clear();
	CalcPotentialCollisions(coObjects, coEvents);

	if (coEvents.size() == 0)
	{
		x += dx;
		y += dy;
	}
	else
	{
		float min_tx, min_ty, nx = 0, ny = 0;
		float rdx = 0;
		float rdy = 0;

		// TODO: This is a very ugly designed function!!!!
		FilterCollision(coEvents, coEventsResult, min_tx, min_ty, nx, ny, rdx, rdy);

		// block every object first!
		y += min_ty * dy + ny * 0.4f;
		x += min_tx * dx + nx * 0.4f;
		//
		// Collision logic with other objects
		//
		for (UINT i = 0; i < coEventsResult.size(); i++)
		{
			LPCOLLISIONEVENT e = coEventsResult[i];

			if (state == ENEMY_STATE_MOVE)
			{
				if (e->obj->type == Type::COLOR_BOX)
				{
					if (e->nx != 0)
						x += dx;
				}
				else if (e->obj->category == Category::MISC || e->obj->category == Category::ENEMY)
				{
					if (e->nx != 0)
					{
						vx = -vx;
						this->nx = -this->nx;
					}
				}
			}
			else if (state == ENEMY_STATE_DIE)
			{
				y += dy;
			}
		}
	}

	for (UINT i = 0; i < coEvents.size(); i++) delete coEvents[i];

	/*x += dx;
	y += dy;

	if (vx < 0 && x < 0) {
		x = 0; vx = -vx;
	}

	if (vx > 0 && x > 290) {
		x = 290; vx = -vx;
	}*/
}

void CGoomba::Render()
{
	if (state == ENEMY_STATE_DIE)
		ani = GOOMBA_ANI_DIE_BY_ATTACK;
	else if (state == GOOMBA_STATE_DIE_BY_CRUSH)
		ani = GOOMBA_ANI_DIE_BY_CRUSH;
	else
		ani = GOOMBA_ANI_MOVE;

	animation_set->at(ani)->Render(x, y);

	RenderBoundingBox();
}

void CGoomba::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
		case ENEMY_STATE_DIE:
			vx = 0.01f * nx;
			vy = GOOMBA_MOVE_SPEED_Y;
			break;
		case ENEMY_STATE_MOVE:
			vx = -GOOMBA_MOVE_SPEED_X;
			nx = -1;
			break;
		case GOOMBA_STATE_DIE_BY_CRUSH:
			vx = 0;
			dieTime = GetTickCount();
			break;
	}
}

CGoomba::~CGoomba()
{
}
