#pragma once
#include <CommonInclude.h>
#include <GameObject.h>

namespace HIYO

class Monster
{
public:
	Monster();
	~Monster();

	void Initialize();
	void Update();
	void Render(HDC hdc);
	void LateUpdate();
};

