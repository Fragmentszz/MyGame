#include "Blood_character.h"
#include<easy2d/easy2d.h>
using namespace easy2d;


blood_character::blood_character(int blood_f)
{
	blood = blood_f;
	blood_init = blood_f;
	this->open(L"血条/人物血条.png");
	this->setScale(0.15, 0.15);
	//MP = gcnew Sprite(L"血条/人物蓝条.png");
	HP = gcnew Sprite(L"血条/人物红条.png");
	this->addChild(HP );
	HP->setPos(Point(713, 345));
	//MP->setPos(Point(712, 529));
	
	text = gcnew Text(L"zz");
	text->setPos(700, 150);
	text->setFontSize(24);
	text->setScale(6, 6);
	text->setColor(Color::Black);
	this->addChild(text);
}


void blood_character::onUpdate()
{
	if (blood >= 0)
	{
		HP->setScaleX(1.0 * blood / blood_init);
		text->setText(std::to_wstring((int)	blood) + L"/" + std::to_wstring(blood_init));
	}
	else
	{
		;
	}
}


