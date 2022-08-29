#include"Settings.h"




Settings::Settings()
{
	auto nomal = gcnew Sprite(L"素材/选项_nomal.png");
	auto selected = gcnew Sprite(L"素材/选项_selected.png");
	this->setNormal(nomal);
	this->setMouseOver(selected);
	auto callback = [this]() {
		auto Settingscene = gcnew SettingScene();
		auto transition = gcnew FadeTransition(1.0f);
		SceneManager::enter(Settingscene,transition,0);

	};

	this->setClickFunc(callback);
}
