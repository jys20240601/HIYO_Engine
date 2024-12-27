#pragma once

#include <GameObject.h>

namespace HIYO
{
	class Bullet:public GameObject
	{
	public:
		Bullet(float x,float y);
		~Bullet();

		void Update();
		void Render(HDC hdc);

	private:
	};
}


