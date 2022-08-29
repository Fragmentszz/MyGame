#include"cj.h"
#include"Litsener_callback.h"



extern int consequence;

Scene1::Scene1()
{
	died = 0;
	menu = nullptr;
	menu2 = nullptr;
	menu3 = nullptr;
	//监听器监听ESC键
	auto callback = [&](Event* evt) {
		switch (evt->type)
		{
			case (Event::KeyDown):
			{
				auto evtz = (KeyDownEvent*)evt;
				if (evtz->key == KeyCode::Esc)
				{
					if (! Game::isPaused())
						Game::pause();
					if (menu == nullptr)		menu = new Esc_menu();
					if (!menu->getParent())		this->addChild(menu);

				}
				break;
			}
			case (MyeventType::First):
			{
				this->textbox->setVisible(1);	
				break; 
			}
			case (MyeventType::Second):
			{

				if(menu2 == nullptr )	menu2 = new End_menu();
				if (!menu2->getParent())	this->addChild(menu2);
				if (!Game::isPaused())
					Game::pause();
				break;
			}
			case(MyeventType::Target1):
			{
				if (!(character->A + character->D) && character->frame_still >= 30)
				{
					Target1->Cue->setVisible(1);
					if(Input::isDown(KeyCode::E))
					{
					if (menu3 == nullptr)	menu3 = new nearT_menu(L"这是一套试卷！？");
					if (!menu3->getParent())	this->addChild(menu3);
					Target1->runAction(gcnew FadeOut(1.5f));
					Target1->collected = 1;
					taskbar1->Update();
					if (!Game::isPaused())
						Game::pause();
					}
				}
				break;
			}
			case(MyeventType::Target2):
			{
				printf("nok");
				if (!(character->A + character->D) && character->frame_still >= 30)
				{
					Target2->Cue->setVisible(1);		//改
					if (Input::isDown(KeyCode::E))
					{
						if (menu3 == nullptr)	menu3 = new nearT_menu(L"填写描述");		//改
						if (!menu3->getParent())	this->addChild(menu3);
						Target2->runAction(gcnew FadeOut(1.5f));		//改
						Target2->collected = 1;		//改
						taskbar2->Update();			//改
						if (!Game::isPaused())
							Game::pause();
					}
				}
				break;
			}
			case(MyeventType::Target3):
			{
				printf("ok");
				if (!(character->A + character->D) && character->frame_still >= 30)
				{
					Target3->Cue->setVisible(1);		//改
					if (Input::isDown(KeyCode::E))
					{
						if (menu3 == nullptr)	menu3 = new nearT_menu(L"填写描述");		//改
						if (!menu3->getParent())	this->addChild(menu3);
						Target3->runAction(gcnew FadeOut(1.5f));		//改
						Target3->collected = 1;		//改
						taskbar3->Update();			//改
						if (!Game::isPaused())
							Game::pause();
					}
				}
				break;
			}
			case(MyeventType::Target4):
			{
				if (!(character->A + character->D) && character->frame_still >= 30)
				{
					Target4->Cue->setVisible(1);		//改
					if (Input::isDown(KeyCode::E))
					{
						if (menu3 == nullptr)	menu3 = new nearT_menu(L"填写描述");		//改
						if (!menu3->getParent())	this->addChild(menu3);
						Target4->runAction(gcnew FadeOut(1.5f));		//改
						Target4->collected = 1;		//改
						taskbar4->Update();			//改
						if (!Game::isPaused())
							Game::pause();
					}
				}
				break;
			}
			default:
			{
				Target1->Cue->setVisible(0);
				Target2->Cue->setVisible(0);
				Target3->Cue->setVisible(0);
				Target4->Cue->setVisible(0);
				break;
			
			
			}
			
		}
	};
	lis1 = gcnew Listener();
	lis1->setCallback(callback);
	this->addListener(lis1);



	forest = gcnew Sprite(L"地图/草地.png");
	//forest->setScale(2.0f);
	forest->setAnchor(0, 0);
	forest->movePos(0,0);
	this->addChild(forest);





	shitai1 = gcnew  Shitai(0, 60, 125,0,0, L"地图/木板.png");
	shitai1->setPos(Point(50, 250));

	Target1 = gcnew Target(100, 190, 50.0, 1, L"这是满分试卷", L"地图/试卷.png");
	

	blackdragon = gcnew Blackdragon(225, 190, 125, 0);
	


	shitai2 = gcnew  Shitai(0, 60, 125,0,0, L"地图/木板.png");
	shitai2->setPos(Point(250, 250));

	shitai3 = gcnew  Shitai(0, 60, 245,0,0, L"地图/木板.png");
	shitai3->setPos(Point(325, 350));

	shitai5 = gcnew Shitai(0,60,245,0,0, L"地图/木板.png");
	shitai5->setPos(Point(570,350));

	blackdragon2 = gcnew Blackdragon(300, 290, 245,  0);

	blackdragon3 = gcnew Blackdragon(300+490, 290, -245,  0);
	
	Target2 = gcnew Target(300 + 250, 290, 50.0, 2, L"这是满分试卷", L"地图/试卷.png");

	shitai4 = gcnew  Shitai(0, 60, 245,2100,0,  L"地图/木板.png");
	shitai4->setPos(Point(300, 550));

	shitai6 = gcnew  Shitai(0, 60, 245, 0,0, L"地图/木板.png");
	shitai6->setPos(Point(700 + 900, 400));

	shitai7 = gcnew  Shitai(0, 60, 245, 0,400, L"地图/木板.png");
	shitai7->setPos(Point(400 + 900, 300));

	shitai8 = gcnew  Shitai(0, 60, 245, 0,0, L"地图/木板.png");
	shitai8->setPos(Point(560 + 900, 200));


	shitai9 = gcnew  Shitai(0, 66, 200, 0, 0, L"地图/云朵.png");
	shitai9->setPos(Point(945 + 900, 400+6));

	blackdragon4 = gcnew Blackdragon(535+900 , 140, 245, 0);

	blackdragon5 = gcnew Blackdragon(675 + 900+245, 340, -245, 0);

	Target3 = gcnew Target(780+900, 140, 50.0,3, L"这是满分试卷", L"地图/试卷.png");

	Target4 = gcnew Target(750 + 900, 340, 50.0, 4, L"这是满分试卷", L"地图/试卷.png");

	//shitai9 = gcnew Shitai()
	
	this->addChild({ blackdragon,blackdragon2,blackdragon3,blackdragon4,blackdragon5 });	//添加怪物
	this->addChild({ shitai1,shitai2,shitai3 ,shitai4,shitai5,shitai6 ,shitai7 ,shitai8,shitai9});		//添加石阶
	


	character = gcnew Character1();
	character->setAnchor(0.5, 1);
	character->setScale(0.2);
	character->movePos(400, 613);
	this->addChild(character);	//添加角色
	
	this->addChild({ Target1,Target2,Target3,Target4 });	//添加任务点


	Blood_character = new blood_character(100);
	character->State = Blood_character;
	this->addChild(Blood_character);



	eventz = new NearJet();
	end_evt = new End_event();

	textbox = gcnew Textbox(L"这可以帮你弹跳\n可以实现二段跳！");
	textbox->setPos(45, 500);
	this->addChild(textbox);

	jet = gcnew Jet(490.0, 613, 18.0,L"地图/弹簧.png");
	this->addChild(jet);

	
	taskbar1 = gcnew Taskbar(L"地图/试卷.png");
	taskbar1->setPos(Window::getWidth() / 2-120, 50);

	taskbar2 = gcnew Taskbar(L"地图/试卷.png");
	taskbar2->setPos(Window::getWidth() / 2 - 35, 50);

	taskbar3 = gcnew Taskbar(L"地图/试卷.png");
	taskbar3->setPos(Window::getWidth() / 2 +50, 50);

	taskbar4 = gcnew Taskbar(L"地图/试卷.png");
	taskbar4->setPos(Window::getWidth() / 2 + 135, 50);

	this->addChild({ taskbar1,taskbar2,taskbar3,taskbar4 });


	isSwitching = 0;
	frame_Switching = 0;
	on_Ground = 1;
	on_Shitai = 0;
	X_right = 1000;

	if(Game::isPaused())
		Game::resume();

}


void Scene1::setHurt()
{
	//character->setPos(500, 613);
	Blood_character->blood = Blood_character->blood - 20;
	character->setHurt();

}


bool Scene1::on_ground()
{
	if ( (abs(613 - character->getPosY())  < 5 || 613- character->getPosY() <0) )
	{	
		character->setPosY(613);
		on_Ground = 1;
		character->fall = 0;
		return 1;
	}
	else
	{	
		//if(! character->K)	character->fall = 1;
		on_Ground = 0;
		return 0;
	}
}


bool Scene1::on_shitai(float x,float y,std::vector<Shitai *> Stai )
{
	for (short i = 0; i < Stai.size(); i++)
	{
		float x0 = Stai[i]->getPosX();
		float y0 = Stai[i]->getPosY();
		if ((x >= x0 + Stai[i]->startx && x <= x0 + Stai[i]->startx + Stai[i]->length) && abs(y - y0 + Stai[i]->height) < 15)
		{
			short flag;
			if (!on_Shitai)
				character->setPosY(y0 - Stai[i]->height);
			
			if (Stai[i]->moveDistanceX != 0)
			{
				if (Stai[i]->frame_move < 75)	flag = 1;
				else flag = -1;
				character->movePosX(flag * Stai[i]->moveDistanceX);
			}
			on_Shitai = 1;
			Stai[i]->On = 1;
			return 1;
		}
		else
		{
			//if (!character->K && abs(y-613)>5 ) character->fall = 1;
			on_Shitai = 0;
		}
	}
	return 0; 

}

bool Scene1::isRealm_monster(std::vector<Blackdragon*> monster)
{
	if (character->frame_hurt >= 120)
	{
		for (short i = 0; i < monster.size(); i++)
		{
			if (((monster[i]->getPosX() - Cposx >0 && monster[i]->getPosX() - Cposx < 125 && monster[i]->move_frame > 200 ) || (Cposx- monster[i]->getPosX() >0 && Cposx - monster[i]->getPosX() < 175 && monster[i]->move_frame < 200)) && abs(Cposy - monster[i]->getPosY()) < 10 && !monster[i]->died)
				return 1;
		}
	}

	return 0;
}

void Scene1::isRealm_attack(std::vector<Blackdragon*> monster)
{
	for (short i = 0; i < monster.size(); i++)
	{
		
		if (character->J && character->time_attack >0.26)
		{
			if (character->direction)
			{
				if ((Cposx - monster[i]->getPosX() > 0 && Cposx - monster[i]->getPosX() < 120 && monster[i]->move_frame > 200 || Cposx - monster[i]->getPosX() > 0 && Cposx - monster[i]->getPosX() < 50 && monster[i]->move_frame < 200) && abs(Cposy - monster[i]->getPosY()) < 10)
					monster[i]->runAction(gcnew FadeOut(1.0f)), monster[i]->died = 1;
			}
			else
			{
				if ((monster[i]->getPosX() -Cposx > 0 && monster[i]->getPosX() - Cposx < 120 && monster[i]->move_frame > 200 || monster[i]->getPosX() - Cposx > 0 && monster[i]->getPosX() - Cposx < 50 && monster[i]->move_frame < 200) && abs(Cposy - monster[i]->getPosY()) < 10)
					monster[i]->runAction(gcnew FadeOut(1.0f)), monster[i]->died = 1;
			}
			
		}
	}
	return ;
}


bool Scene1::onJet(float x, float y)
{
	if (x >=jet->getPosX() && x <= (jet->getPosX() + jet->Length) && abs(y - 539) <= 10)

		return 1;

	return 0;
}
void Scene1::nearTarget(float x, float y, std::vector<Target*> Target)
{

	for (short i = 0; i < Target.size(); i++)
	{
		if (Target[i]->Nearthis(x, y))	return;
	}
	return;
}

void Scene1::SwitchPosX(std::vector<Sprite *> node,float step)
{
	for (short i = 0; i < node.size(); i++)
		node[i]->movePosX(step);
}

void Scene1::onUpdate()
{
	Cposx = character->getPosX(), Cposy = character->getPosY();
	textbox->setVisible(0);
	if (jet->Nearthis(Cposx,Cposy))	this->dispatch(eventz);
	nearTarget(Cposx, Cposy, { Target1,Target3,Target2,Target4 });
	//printf("%f,%f", blackdragon4->getPos().x, blackdragon4->getPos().y);
	if (!(on_Shitai) && on_shitai(Cposx, Cposy, { shitai1,shitai2,shitai3,shitai4,shitai5,shitai6 ,shitai7 ,shitai8,shitai9 }) || !(on_Ground) && on_ground())
		character->fall = 0, character->zhen = 40;
	else if (!(on_shitai(Cposx, Cposy, { shitai1,shitai2,shitai3,shitai4,shitai5,shitai6 ,shitai7 ,shitai8,shitai9 }) + character->K + on_ground()))
	{
		if (character->fall == 0)	character->fall = 1; character->zhen = 41;
	}
	if (onJet(Cposx, Cposy))	character->runAction(gcnew Sequence({ gcnew MoveBy(0.15,Point(0,36)),gcnew MoveBy(0.5, Point(0, -500)) })),jet->OnJetAction();
	if ((Cposx < 100 && ! isSwitching && X_right > 1000) || (isSwitching == 1 && 0 < frame_Switching && frame_Switching <= 45))
		isSwitching = 1, frame_Switching += 1, SwitchPosX({forest,character,shitai1,shitai2,shitai3,shitai4,jet,blackdragon,shitai5,shitai6 ,shitai7 ,shitai8,shitai9,blackdragon2,blackdragon3,blackdragon4,blackdragon5,Target1,Target2,Target3,Target4 },20),X_right -=20;
	else if (Cposx > 900 && !isSwitching && X_right < 3760 || (isSwitching == 2 && 0 < frame_Switching && frame_Switching <= 45))
		isSwitching = 2, frame_Switching += 1, SwitchPosX({forest,character,shitai1,shitai2,shitai3,shitai4,jet,blackdragon,shitai5,shitai6 ,shitai7 ,shitai8,shitai9,blackdragon2,blackdragon3,blackdragon4,blackdragon5,Target1,Target2,Target3,Target4 },-20),X_right += 20;
	else if (isSwitching && (Cposx>100 && Cposx<900))
		isSwitching = 0, frame_Switching = 0;
	isRealm_attack({ blackdragon,blackdragon2,blackdragon3,blackdragon4,blackdragon5 });
	if (isRealm_monster({ blackdragon,blackdragon2,blackdragon3,blackdragon4,blackdragon5 }))			setHurt();
	if (!(Blood_character->blood > 0) && died == 0)
	{
		died = 1; this->dispatch(end_evt);
	}
	if (consequence == 1 && shitai9->On)//&& Target1->collected && Target2->collected && Target3->collected && Target4->collected && shitai9->On)
		shitai9->frame_move = 0, shitai9->moveDistanceX = shitai9->moveDistanceX + 0.2;
}



