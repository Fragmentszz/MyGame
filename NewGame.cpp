#include"NewGame.h"
#include"cj.h"
#include"Map.h"

NewGame::NewGame()
{
	auto nomal = gcnew Sprite(L"素材/新游戏_nomal.png");
	auto selected = gcnew Sprite(L"素材/新游戏_selected.png");
	this->setNormal(nomal);
	this->setMouseOver(selected);
	auto callback = []() {
		auto Transi = gcnew FadeTransition(1.0f);
		auto cj = gcnew Map();
		SceneManager::enter(cj,Transi);
	};

	this->setClickFunc(callback);
}