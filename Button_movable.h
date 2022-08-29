#pragma once
#include<easy2d/easy2d.h>
#include"Myevent.h"

using namespace easy2d;

class Movable_Button :
	public Button
{
public:
	bool Button_Down;
	bool isSelected;
protected:
	Listener* lis;

};

