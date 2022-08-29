#include"SettingScene.h"


SettingScene::SettingScene()
{
	auto background = gcnew Sprite(L"��Դ/ѡ��ľ�屳��.png");
	auto background2 = gcnew Sprite(L"�ز�/����.png");
	this->addChild({background,background2});
	volume_button = gcnew Volume_Button();
	this->addChild(volume_button);
}

void SettingScene::moveby(std::vector<Movable_Button*> vec)
{

		for (short i = 0; i < vec.size(); i++)
		{
			if (vec[i]->Button_Down && vec[i]->isSelected)
			{
				auto Dealtx = Input::getMouseDeltaX();
				vec[i]->movePosX(Dealtx);
				return;
			}
		}

}

void SettingScene::onUpdate()
{
	moveby({ volume_button });

}