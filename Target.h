#pragma once
#include<easy2d/easy2d.h>
#include"textbox.h"
#include"Cue.h"
#include"Myevent.h"

using namespace easy2d;


class Target :
	public Sprite
{
public:
	Target(float x,float y ,float length,short id,const String description,const String filepath);
	TextCue* Cue;
	bool Nearthis(float x,float y );
	bool collected;
protected:
	float X, Y, Length;
	short ID;
	

};