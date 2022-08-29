#include<easy2d/easy2d.h>
#include"Character1.h"
#include"Gamestart.h"


using namespace easy2d;

int consequence;

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
)
{
    consequence = 0;

    if (Game::init(L"PrincessConnect:ReTry"))
    {
        bool run = 1;
        Logger::showConsole();
        //Window::setTitle(L"PrincessConnect:ReTry");
        Window::setSize(1000, 750);
        auto scene1 = new StartScene();
        SceneManager::enter(scene1);

        Game::start();

        Game::destroy();

    }

    return 0;
}