#pragma once

#include <GameObject.h>

namespace HIYO

{
	class Player : public GameObject
	{

	public:

		Player();
		~Player();

		void Fire();
		void Update();
		void Render(HDC hdc);

	private:

	};
}
