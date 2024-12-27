#pragma once

#include <GameObject.h>
#include <random>

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
        // Player-specific member variables can go here.
    };

    class Monster : public GameObject
    {
    public:
        Monster();
        ~Monster();

        void Update();
        void Render(HDC hdc);

    private:
        float mSpeed;        // Movement speed of the monster
        float mDirection;    // Current direction (-1 for left, 1 for right)
        float mBoundaryLeft; // Left boundary for movement
        float mBoundaryRight;// Right boundary for movement

        void RandomizeDirection();
    };
}