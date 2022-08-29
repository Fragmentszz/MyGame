#include<easy2d/easy2d.h>
#include"stage.h"
using namespace easy2d;



Shitai::Shitai(float startx0,float height0,float length0, float movedistancex,float movedistancey,const String& path)
{
	
	this->open(path);
	this->setAnchor(0, 1);
	//this->setScale(0.5f);
	height = height0, length = length0, startx = startx0;
	On = 0;
	this->setScaleX(1.0 * length / this->getWidth());
	frame_move = 0;
	moveDistanceX = movedistancex/150;
	moveDistanceY = movedistancey / 150;

}

//path,height,length,startx

void Shitai::onUpdate()
{
	if (frame_move >= 75)	this->movePosX(-moveDistanceX ), this->movePosY(-moveDistanceY);
	if (frame_move < 75)		this->movePosX(moveDistanceX) ,this->movePosY(moveDistanceY);
	frame_move = (frame_move + 1) % 150;
}
