#include "Application.h"
#include "Player.h"
#include "Bullet.h"

namespace HIYO
{
    Application::Application()
        : mHwnd(nullptr)
        , mHdc(nullptr)
        , mPlayer()
    {
    }

    Application::~Application()
    {
        if (mHdc) ReleaseDC(mHwnd, mHdc);
    }

    void Application::Initialize(HWND hWnd)
    {
        mHwnd = hWnd;
        mHdc = GetDC(hWnd);
    }

    void Application::Run()
    {
        Update();
        LateUpdate();
        Render();
    }

    void Application::Render()
    {
        PatBlt(mHdc, 0, 0, 800, 600, WHITENESS);

        mPlayer.Render(mHdc);
        for (auto& bullet : mBullets)
        {
            bullet.Render(mHdc);
        }
    }
}