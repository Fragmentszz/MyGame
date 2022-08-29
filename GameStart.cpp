#include"Gamestart.h"
#include"Litsener_callback.h"


StartScene::StartScene()
{
	auto background = gcnew Sprite(L"素材/纯白.png");
	auto background2 = gcnew Sprite(L"资源/安带.jpg");
	background->setOpacity(0.6);
	this->addChild(background2);
	this->addChild(background);
	auto Newgame = gcnew NewGame();
	auto Continuegame = gcnew ContinueGame();
	auto settings = gcnew Settings();
	auto quit = gcnew Quit();
	Newgame->setAnchor(0.5, 0.5);
	Continuegame->setAnchor(0.5, 0.5);
	settings->setAnchor(0.5, 0.5);
	quit->setAnchor(0.5, 0.5);
	Newgame->setPos(500, 430);
	Continuegame->setPos(500, 520);
	settings->setPos(500, 610);
	quit->setPos(500, 700);
	this->addChild({ Newgame,Continuegame,settings,quit });


	

}


void StartScene::onUpdate()
{
	
	;
}