#include "Bullet.h"

namespace HIYO
{
	class Bullet :public GameObject
	{
	public:
		Bullet(float x, float y) :GameObject(float x, float y, 10.0f, 10.0f)
		{
			mSpeed = 10.0f;
		}
		~Bullet()
		{
		}

		void Update()
		{
			mY -= mSpeed;
		}

		void Bullet::Render(HDC hdc)
		{
			HBRUSH brush = CreateSolidBrush(RGB(255, 0, 0));
			SelectObject(hdc, brush);
			Rectangle(hdc, (int)mX, (int)mY, (int)(mX + mWidth), (int)(mY + mHeight));
			DeleteObject(brush);
		}
	};

}
