#include <Player.h>
#include <Bullet.h>

namespace HIYO
{

	Player::Player() : GameObject(100.0f, 300.0f, 50.0f, 50.0f)
	{
		mSpeed = 5.0f;
	}
	Player::~Player()
	{

	}

	void Player::Fire(std::vector<Bullet>& bullets)
	{
		bullets.emplace_back(mX + mWidth / 2, mY);
	}

	void Player::Update()
	{

		if (Input::IsKeyPressed('A'))
		{
			mX -= mSpeed;
		}

		if (Input::IsKeyPressed('D'))
		{
			mX += mSpeed;
		}

		if (Input::IsKeyPressed('W'))
		{
			mY -= mSpeed;
		}

		if (Input::IsKeyPressed('S'))
		{
			mY += mSpeed;
		}

		if (Input::IsKeyDown(VK_SPACE))
		{
			Fire();
		}
	}
	void Player::Render(HDC hdc)
	{
		HBRUSH brush = CreateSolidBrush(RGB(0, 255, 0));
		SelectObject(hdc, brush);
		Rectangle(hdc, (int)mX, (int)mY, (int)(mX + mWidth), (int)(mY + mHeight));
		DeleteObject(brush);
	}

}