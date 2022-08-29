#pragma once
#include<easy2d/easy2d.h>
using namespace easy2d;



class Shitai:
	public Sprite
{
public:
	Shitai(float startx,float height,float length, float movedistancex,float movedistancey,const String& path = L"" );
	void onUpdate();
public:
	float height, length,startx, moveDistanceX, moveDistanceY;
	short frame_move;
	bool On;

};