#include"Settings.h"




Settings::Settings()
{
	auto nomal = gcnew Sprite(L"�ز�/ѡ��_nomal.png");
	auto selected = gcnew Sprite(L"�ز�/ѡ��_selected.png");
	this->setNormal(nomal);
	this->setMouseOver(selected);
	auto callback = [this]() {
		auto Settingscene = gcnew SettingScene();
		auto transition = gcnew FadeTransition(1.0f);
		SceneManager::enter(Settingscene,transition,0);

	};

	this->setClickFunc(callback);
}
