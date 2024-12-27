#include <CommonInclude.h>

namespace HIYO
{
    Monster::Monster()
        : mSpeed(2.0f), mDirection(1.0f), mBoundaryLeft(100.0f), mBoundaryRight(500.0f)
    {
        // Seed the random number generator
        std::srand(static_cast<unsigned int>(std::time(nullptr)));

        // Randomize the initial direction
        RandomizeDirection();
    }

    Monster::~Monster() {}

    void Monster::RandomizeDirection()
    {
        // Randomize direction: -1 for left, 1 for right
        mDirection = (std::rand() % 2 == 0) ? -1.0f : 1.0f;
    }

    void Monster::Update()
    {
        // Move the monster
        mPosition.x += mDirection * mSpeed;

        // Check boundaries and reverse direction if necessary
        if (mPosition.x <= mBoundaryLeft || mPosition.x >= mBoundaryRight)
        {
            mDirection *= -1.0f;
        }

        // Occasionally randomize direction to make movement less predictable
        if (std::rand() % 100 < 5) // 5% chance per frame to change direction
        {
            RandomizeDirection();
        }
    }

    void Monster::Render(HDC hdc)
    {
        // Render the monster (placeholder: a simple rectangle for now)
        Rectangle(hdc, static_cast<int>(mPosition.x - 10), static_cast<int>(mPosition.y - 10),
            static_cast<int>(mPosition.x + 10), static_cast<int>(mPosition.y + 10));
    }
}