#pragma once
#include<easy2d/easy2d.h>
#include"Character1.h"
#include"Blood_monster.h"

using namespace easy2d;

class Blackdragon :
	public Sprite
{

public:
	Blackdragon(float x,float y,float xlen,float ylen);
public:
	void onUpdate();
	Animate* attack_left;
	Animate* attack_right;
	Character1* character;
	bool attack;
	float time_search;
	float time_attack;
	blood_monster* Blood;
	int blood;
	bool isRealm(float CposX,float CposY);
	bool isSeen();
	float X, Y, Xlen, Ylen;
	int move_frame;
	bool died;
	Sprite* fire1, * fire2;
};
