#include"Map.h"
#include"greedymonster/MainScene.h"
#include"cj.h"
#include"Gamestart.h"

extern int consequence;

Map::Map()
{
	auto lis = gcnew Listener();

	auto callback_Esc = [this](Event* evt) {
		if (evt->type == Event::KeyDown)
		{
			auto eventz = (KeyDownEvent*)evt;
			if (eventz->key == KeyCode::Esc)
			{
				auto sce =gcnew StartScene();
				auto sce_transition = gcnew EmergeTransition(1);
				SceneManager::enter(sce,sce_transition);
			}
		}
	};

	lis->setCallback(callback_Esc);
	this->addListener(lis);

	//指定按钮初始位置以及形状
	auto map = gcnew Sprite(L"素材/地图.png");
	this->addChild(map);
	auto bobei_selected = gcnew Sprite(L"素材/博北_selected.png");
	auto beiti_selected = gcnew Sprite(L"素材/北运动场_selected.png");
	beiti_selected->setPos(-75, -25);
	auto liuyuan_selected = gcnew Sprite(L"素材/榴园餐厅_selected.png");
	auto selectedArea1 = gcnew Sprite(L"素材/坐标1.png");
	auto selectedArea2 = gcnew Sprite(L"素材/坐标2.png");
	auto selectedArea3 = gcnew Sprite(L"素材/坐标3.png");
	selectedArea3->setPos(-50, -50);
	bobei = gcnew Button();
	beiti = gcnew Button();
	liuyuan = gcnew Button();
	bobei->setNormal(selectedArea1);beiti->setNormal(selectedArea2), liuyuan->setNormal(selectedArea3);
	bobei->setMouseOver(bobei_selected), beiti->setMouseOver(beiti_selected), liuyuan->setMouseOver(liuyuan_selected);
	bobei->setAnchor(0.5f, 0.5f), beiti->setAnchor(0.5f, 0.5f), liuyuan->setAnchor(0.5f, 0.5f);
	bobei->setPos(520, 520), beiti->setPos(934, 242), liuyuan->setPos(775, 200);
	this->addChild({ bobei,beiti,liuyuan });


	//添加按钮响应函数
	auto callback_liuyuan = [this]() {
		Window::setSize(512, 362);
		MusicPlayer::preload(L"greedymonster/res/audio/jump.wav");
		MusicPlayer::preload(L"greedymonster/res/audio/score.wav");
		auto cj1 =gcnew MainScene();
		auto transition = gcnew FadeTransition(1.5f);
		SceneManager::enter(cj1,transition);
		//this->autorelease();
	};
	liuyuan->setClickFunc(callback_liuyuan);

	auto callback_beiti = [this]() {
		Window::setSize(1000, 750);
		auto cj2 = gcnew Scene1();
		auto transition = gcnew FadeTransition(2.0f);
		SceneManager::enter(cj2,transition);
		//this->autorelease();

	};
	beiti->setClickFunc(callback_beiti);

	printf("%d", consequence);


}