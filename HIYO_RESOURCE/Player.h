#pragma once

#include <GameObject.h>

namespace HIYO
{
    class Player : public GameObject
    {
    public:
        Player();
        ~Player();

        void Fire(std::vector<Bullet>& bullets);
        void Update();
        void Render(HDC hdc);
    };
}
