#pragma once
#include<easy2d/easy2d.h>
#include"Character1.h"
#include"stage.h"
#include"blackdragon.h"
#include"Blood_character.h"
#include"jet.h"
#include"Myevent.h"
#include<vector>
#include"textbox.h"
#include"Esc_menu.h"
#include"End_menu.h"
#include"Target.h"
#include"nearT_menu.h"
#include"Taskbar.h"


using namespace easy2d;

class Scene1 :
	public Scene
{
public:
		Scene1();
public:
	void onUpdate();
	bool on_ground();
	bool on_shitai(float x, float y,std ::vector<Shitai*> Stai );
	void SwitchPosX(std::vector<Sprite *> node,float step);
	bool onJet(float x,float y);
	void nearTarget(float x, float y, std::vector<Target*> Target);
	bool isRealm_monster(std::vector<Blackdragon*> monster);
	void isRealm_attack(std::vector<Blackdragon*> monster);
	void setHurt();

protected:
	Blackdragon* blackdragon,* blackdragon2,*blackdragon3,*blackdragon4,*blackdragon5;
	Character1* character;
	Shitai* shitai1,*shitai2,*shitai3,*shitai4,*shitai5,*shitai6,* shitai7,* shitai8,*shitai9;
	float Cposx, Cposy;
	bool on_Ground,on_Shitai;
	Listener* lis,*lis1;
	bool pause =0;
	blood_character* Blood_character;
	Sprite* forest;
	short frame_Switching;
	short isSwitching;
	Listener* listener;
	NearJet* eventz;
	End_event* end_evt;
	Textbox* textbox;
	Jet* jet;
	Esc_menu* menu;
	End_menu* menu2;
	bool died;
	Target* Target1, *Target2,*Target3,*Target4;
	nearT_menu* menu3;
	Taskbar* taskbar1, *taskbar2, *taskbar3, *taskbar4;
	int X_right;
};




