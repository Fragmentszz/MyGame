#pragma once
#include<easy2d/easy2d.h>

using namespace easy2d;


class Textbox :
	public Sprite
{
public:
	Textbox(String description);
	String dscrp;
	Text* text;
};