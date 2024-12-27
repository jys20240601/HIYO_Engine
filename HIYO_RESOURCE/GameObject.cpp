#include "GameObject.h"
#include "CommonInclude.h"

namespace HIYO
{
	GameObject::GameObject()
		: mX(0)
		, mY(0)
		, mWidth(0)
		, mHeight(0)
		, mSpeed(0)
		, mColor(RGB(0, 0, 0))
	{

	}

	GameObject::~GameObject()
	{

	}

	void GameObject::Update()
	{

	}

	void GameObject::LateUpdate()
	{

	}

	void GameObject::Render(HDC hdc)
	{

		HBRUSH NewBrush = CreateSolidBrush(mColor);
		HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, NewBrush);

		Rectangle(hdc, mX, mY, mX + mWidth, mY + mHeight);

		SelectObject(hdc, oldBrush);

		DeleteObject(NewBrush);

	}

	void GameObject::SetPosition(float x, float y)
	{
		mX = x;
		mY = y;
	}

	void GameObject::SetSize(float width, float height)
	{
		mWidth = width;
		mHeight = height;
	}

	void GameObject::SetSpeed(float speed)
	{
		mSpeed = speed;
	}

	void GameObject::SetColor(COLORREF color)
	{
		mColor = color;
	}

}
