#include"End_menu.h"
#include"Map.h"
#include"Quit.h"
#include"cj.h"

End_menu::End_menu()
{

	auto background = gcnew Sprite(L"匼第/曾啞.png");
	this->setOpacity(0.6f);
	this->addChild(background);


	auto exsit = gcnew Quit();

	auto callback1 = [this]() {
		Window::setSize(1000, 750);
		SceneManager::clear();
		auto map = gcnew Map();
		SceneManager::enter(map);
		auto scne = this->getParentScene();
		this->removeFromParent();
		//scne->autorelease();
		Game::resume();
	};
	exsit->setClickFunc(callback1);

	auto Tryagain = gcnew Button();
	auto ta_selected = gcnew Sprite(L"匼第/Tryagain_selected.png");
	auto ta_nomal = gcnew Sprite(L"匼第/Tryagain_nomal.png");
	Tryagain->setNormal(ta_nomal), Tryagain->setMouseOver(ta_selected);
	auto callback2 = [this]() {
		SceneManager::clear();
		auto sce = new Scene1();
		auto part = this->getParentScene();
		SceneManager::enter(sce);
		this->removeFromParent();
		//part->autorelease();
		Game::resume();
		

	};

	Tryagain->setClickFunc(callback2);

	Tryagain->setPos(Window::getWidth() / 2 - 100, Window::getHeight() / 2);
	exsit->setPos(Window::getWidth() / 2 - 100, Window::getHeight() / 2 + 100);
	this->addButton(Tryagain);
	this->addButton(exsit);

}