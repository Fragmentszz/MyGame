#pragma once
#include<easy2d/easy2d.h>
using namespace easy2d;

class blood_character :
	public Sprite
{
public:
		blood_character(int blood_f);
		bool alive;
		float blood;
		int blood_init;
		int mana,mana_init;
		void onUpdate();
		Sprite* HP;
		Sprite* MP;
		Text *text;

};