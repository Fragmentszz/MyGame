#pragma once
#include<easy2d/easy2d.h>
#include"Volume_Button.h"
#include<vector>
using namespace easy2d;

class SettingScene :
	public Scene
{
public:
	SettingScene();
	void onUpdate();
	void moveby(std::vector<Movable_Button*> );
protected:
	Volume_Button* volume_button;


};
