#include"Esc_menu.h"
#include"Quit.h"
#include"ContinueGame.h"
#include"Map.h"

Esc_menu::Esc_menu()
{
	
	//背景
	auto background = gcnew Sprite(L"素材/纯白.png");
	this->setOpacity(0.6f);
	this->addChild(background);

	//处理返回地图按钮
	auto backMap = gcnew Quit();	//改图片
	auto callback = [this]() {
		Window::setSize(1000, 750);
		SceneManager::clear();
		auto map = gcnew Map();
		SceneManager::enter(map);
		auto scne = this->getParentScene();
		this->removeFromParent();
		scne->autorelease();
		Game::resume();
	};
	backMap->setClickFunc(callback);
	if(Window::getHeight() <700)
		backMap->setPos(Window::getWidth() / 4-20, Window::getHeight() / 2);
	else
		backMap->setPos(Window::getWidth() / 2-100, Window::getHeight() / 2);
	this->addButton(backMap);

	//处理继续按钮
	auto resume = gcnew ContinueGame();
	auto callback2 = [this]() {
		if (Game::isPaused())
		{
			Game::resume();
			
		}
		this->removeFromParent();
	};
	resume->setClickFunc(callback2);
	if(Window::getHeight()<700)
		resume->setPos(Window::getWidth() / 4-20, Window::getHeight() / 2+100);
	else
		resume->setPos(Window::getWidth() / 2-100, Window::getHeight() / 2+100);
	this->addButton(resume);


}