#include"Esc_menu.h"
#include"Quit.h"
#include"ContinueGame.h"
#include"Map.h"

Esc_menu::Esc_menu()
{
	
	//����
	auto background = gcnew Sprite(L"�ز�/����.png");
	this->setOpacity(0.6f);
	this->addChild(background);

	//�����ص�ͼ��ť
	auto backMap = gcnew Quit();	//��ͼƬ
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

	//���������ť
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