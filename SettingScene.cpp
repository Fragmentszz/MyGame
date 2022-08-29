#include"SettingScene.h"


SettingScene::SettingScene()
{
	auto background = gcnew Sprite(L"×ÊÔ´/Ñ¡ÏîÄ¾°å±³¾°.png");
	auto background2 = gcnew Sprite(L"ËØ²Ä/´¿°×.png");
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