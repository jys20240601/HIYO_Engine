#pragma once

#include <GameObject.h>

namespace HIYO
{
	class Bullet
	{
	public:
		Bullet();
		~Bullet();

		void Initialize();
		void Update();
		void Render(HDC hdc);
		void LateUpdate();

		void Fire(float x, float y);


	private:
	};
}


