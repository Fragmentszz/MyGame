#pragma once
#include<easy2d/easy2d.h>
using namespace easy2d;

class blood_monster :
	public Sprite
{
public:
	blood_monster(int blood_init);
protected:

	int blood_first;

public:
	void onUpdate();
	Sprite* Blood;
	bool alive;
	int blood;


};