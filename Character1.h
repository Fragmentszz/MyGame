#pragma once
#include <easy2d/easy2d.h>
#include"Blood_character.h"
using namespace easy2d;




class Character1:
	public Sprite
{
public:
	Character1();

public:
	void onUpdate();
	void setHurt();
public:
	Animate* run_left;
	Animate* still_left;
	Animate* still_right;
	Animate* run_right;
	Animate* jump_left;
	Animate* jump_right;
	Animate* attack_right;
	Animate* attack_left;
	blood_character* State;
	bool run;
	bool direction;
	bool A;
	bool D;
	bool K;
	bool J;
	bool enable;
	float time_jump;
	float time_attack;
	int zhen;
	short fall;
	int blood;
	short frame_hurt ;
	short frame_still;

};



