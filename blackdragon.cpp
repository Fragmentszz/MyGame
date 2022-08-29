#include<easy2d/easy2d.h>
#include"blackdragon.h"
#include"Character1.h"
#include"Blood_monster.h"

using namespace easy2d;


Blackdragon::Blackdragon(float x, float y, float xlen, float ylen)
{
	this->open(L"Ð¡ºÚÁú/attack1.png");
	this->setAnchor(0, 1);
	/**auto image1 = gcnew Image(L"Ð¡ºÚÁú/attack1.png"); auto image2 = gcnew Image(L"Ð¡ºÚÁú/attack2.png"); auto image3 = gcnew Image(L"Ð¡ºÚÁú/attack3.png"); auto image4 = gcnew Image(L"Ð¡ºÚÁú/attack4.png"); auto image5 = gcnew Image(L"Ð¡ºÚÁú/attack5.png"); auto image6 = gcnew Image(L"Ð¡ºÚÁú/attack6.png"); auto image7 = gcnew Image(L"Ð¡ºÚÁú/attack7.png");
	auto attack_left_pre = gcnew Animation(0.15f);
	attack_left_pre->add({ image1,image2,image3,image4,image5,image6,image7 });
	attack_left = new Animate(attack_left_pre);
	image1 = gcnew Image(L"Ð¡ºÚÁú/attack1R.png"); image2 = gcnew Image(L"Ð¡ºÚÁú/attack2R.png"); image3 = gcnew Image(L"Ð¡ºÚÁú/attack3R.png");  image4 = gcnew Image(L"Ð¡ºÚÁú/attack4R.png");  image5 = gcnew Image(L"Ð¡ºÚÁú/attack5R.png"); image6 = gcnew Image(L"Ð¡ºÚÁú/attack6R.png");  image7 = gcnew Image(L"Ð¡ºÚÁú/attack7R.png");
	auto attack_right_pre = gcnew Animation(0.15f);
	attack_right_pre->add({ image1,image2,image3,image4,image5,image6,image7 });
	attack_right = new Animate(attack_right_pre);
	attack = 0;
	time_attack = 0;
	blood = 100;
	Blood = gcnew blood_monster(blood);
	Blood->setScale(0.3, 0.3);
	Blood->setPos(Point(-50,-50));
	this->addChild(Blood);**/
	died = 0;
	X = x, Y = y, Xlen = xlen, Ylen = ylen;
	if (xlen > 0)	move_frame = 0; else move_frame = 400;
	this->setPos(Point(x, y));
	fire1 = new Sprite(L"Ð¡ºÚÁú/»ð1.png");
	fire1->setAnchor(1, 0);
	fire1->setPos(Point(0, 15));

	fire2 = new Sprite(L"Ð¡ºÚÁú/»ð2.png");
	fire2->setPos(Point(60,15));


	this->addChild({ fire1,fire2 });
}


bool Blackdragon::isRealm(float CposX,float CposY)
{
	if (abs(this->getPosX() - CposX) < 20 && abs(this->getPosY() - CposY) < 5)
		return 1;
	return 0;

}

bool Blackdragon::isSeen()
{
	return this->getPosX() >= 0 && this->getPosX() <= 1000 && this->getPosY() >= 0 && this->getPosY() <= 750;

}

void Blackdragon::onUpdate()
{
	if (/**Blood->blood > 0 && Blood->alive && **/  !died )
	{
		if (Xlen > 0)
		{
			float X0 = this->getPosX();
			float Y0 = this->getPosY();
			if (move_frame == 0)	this->open(L"Ð¡ºÚÁú/attack1R.png"), fire1->setVisible(0), fire2->setVisible(1);
			if (move_frame == 200)	this->open(L"Ð¡ºÚÁú/attack1.png"), fire1->setVisible(1), fire2->setVisible(0);
			if (move_frame > 199)	this->movePos(-Xlen / 200, -Ylen / 200);
			else					this->movePos(Xlen / 200, Ylen / 200);
			move_frame = (move_frame + 1) % 400;
			/**if (Blood->blood <= 0 && Blood->alive)
				this->runAction(gcnew FadeOut(0.3f)), Blood->alive = 0;**/
		}
		else if (Xlen < 0)
		{
			float X0 = this->getPosX();
			float Y0 = this->getPosY();
			if (move_frame == 200)	this->open(L"Ð¡ºÚÁú/attack1R.png"), fire1->setVisible(0), fire2->setVisible(1);
			if (move_frame == 400 || move_frame ==0)	this->open(L"Ð¡ºÚÁú/attack1.png"), fire1->setVisible(1), fire2->setVisible(0);
			if (move_frame>0 && move_frame <= 200)	this->movePos(-Xlen / 200, -Ylen / 200);
			else									this->movePos(Xlen / 200, Ylen / 200);
			move_frame = (move_frame - 1 + 400) % 400 ;
		}

	}
}