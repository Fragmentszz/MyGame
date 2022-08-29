#pragma once
#include<easy2d/easy2d.h>
#include"NewGame.h"
#include"ContinueGame.h"
#include"Settings.h"
#include"Quit.h"
#include<vector>

using namespace easy2d;


class StartScene :
	public Scene
{
public:
	StartScene();
	void onUpdate();
protected:
	Listener* lis1;

};