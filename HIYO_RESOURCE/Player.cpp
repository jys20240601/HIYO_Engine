#include <Player.h>
#include <Bullet.h>
#include <GameObject.h>

namespace HIYO
{

	Player::Player()
	{

	}
	Player::~Player()
	{

	}

	void Player::Fire()
	{
		Bullet::Fire();
	}

	void Player::Update()
	{

	if (Input::IsKeyPressed('A'))
	{
		mX -= 0.1f * mSpeed;
	}

	if (Input::IsKeyPressed('D'))
	{
		mX += 0.1f * mSpeed;
	}

	if (Input::IsKeyPressed('W'))
	{
		mY -= 0.1f * mSpeed;
	}

	if (Input::IsKeyPressed('S'))
	{
		mY += 0.1f * mSpeed;
	}

	if (Input::IsKeyDown(VK_SPACE))
	{
		Fire();
	}

	void Player::Render
	{
		GameObject::Render(hdc);
	}

}