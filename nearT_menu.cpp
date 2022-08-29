#include"nearT_menu.h"


nearT_menu::nearT_menu(String description)
{
	auto background = gcnew Sprite(L"素材/对话框.png");
	background->setAnchor(0.5, 0.5);
	background->setPos(500, Window::getHeight() / 2);
	this->setOpacity(0.8f);
	this->addChild(background);

	auto text = gcnew Text(description);
	text->setAnchor(0.5, 0.5);
	text->setPos(200, 185);
	background->addChild(text);


	auto Putit = gcnew Button();
	auto putit_nomal = gcnew Sprite(L"素材/拾起它_nomal.png");
	auto putit_mouseover = gcnew Sprite(L"素材/拾起它_mouseover.png");
	Putit->setNormal(putit_nomal), Putit->setMouseOver(putit_mouseover);
	auto callback = [&]() {
		if (Game::isPaused())
			Game::resume();
		this->removeFromParent();
	};
	Putit->setClickFunc(callback);
	Putit->setPos(Window::getWidth() / 2-150, Window::getHeight() / 2);
	this->addButton(Putit);

	
}