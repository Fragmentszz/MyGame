#include "Blood_monster.h"
#include<easy2d/easy2d.h>
using namespace easy2d;


blood_monster::blood_monster(int blood_init)
{
	this->open(L"血条/怪物血条.png");
	blood = blood_init;
	blood_first = blood_init;
	Blood = gcnew Sprite(L"血条/血条红.png");
	Blood->setPos(Point(92, 37));
	//Blood->setScale(2.0, 2.0);
	this->addChild(Blood);
	alive = 1;

}



void blood_monster::onUpdate()
{
	/*if (alive)
	{
		blood = blood - 1;
		Blood->setScaleX(1.0 * blood / blood_first);
	}*/
	;
}
