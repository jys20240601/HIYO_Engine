#pragma once
#include "CommonInclude.h"

namespace HIYO
{
	class GameObject
	{
	public:

		GameObject();
		~GameObject();

		void Update();
		void LateUpdate();
		void Render(HDC hdc);

		void SetPosition(float x, float y);
		void SetSize(float width, float height);
		void SetSpeed(float speed);
		void SetColor(COLORREF color);

		float GetPositionXY() const { return mX; }
		float GetPositionY() const { return mY; }
		float GetWidth() const { return mWidth; }
		float GetHeight() const { return mHeight; }

	private:

		float mX;
		float mY;
		float mWidth;
		float mHeight;
		float mSpeed;
		COLORREF mColor;

	};
}

