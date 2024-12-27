#include "GameObject.h"
#include "CommonInclude.h"

namespace HIYO
{
	GameObject::GameObject(float x,float y,float width,float height)
		: mX(x)
		, mY(y)
		, mWidth(width)
		, mHeight(height)
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
