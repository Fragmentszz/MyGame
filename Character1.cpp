#include"cj.h"
#include"Blood_character.h"
#include <easy2d/easy2d.h>
using namespace easy2d;


Character1::Character1()
{
	//¼ÓÔØ¾²Ö¹¶¯×÷
		//ÃæÏòÓÒ±ß
	auto animation = new Animation(0.2f);
	this->open(L"¶¯×÷/¾²Ö¹ÓÒ/Í¼²ã 1.png");
	auto image1 = gcnew Image(L"¶¯×÷/¾²Ö¹ÓÒ/Í¼²ã 10.png");
	auto image2 = gcnew Image(L"¶¯×÷/¾²Ö¹ÓÒ/Í¼²ã 18.png");
	auto image3 = gcnew Image(L"¶¯×÷/¾²Ö¹ÓÒ/Í¼²ã 26.png");
	auto image4 = gcnew Image(L"¶¯×÷/¾²Ö¹ÓÒ/Í¼²ã 34.png");
	auto image5 = gcnew Image(L"¶¯×÷/¾²Ö¹ÓÒ/Í¼²ã 42.png");
	animation->add(image1);
	animation->add(image2);
	animation->add(image3);
	animation->add(image4);
	animation->add(image5);
	still_right= new Animate(animation);

		//ÃæÏò×ó±ß
	auto still_left_pre = new Animation(0.2f);
	this->open(L"¶¯×÷/¾²Ö¹×ó/Í¼²ã 101.png");
	image1 = gcnew Image(L"¶¯×÷/¾²Ö¹×ó/Í¼²ã 100.png");
	image2 = gcnew Image(L"¶¯×÷/¾²Ö¹×ó/Í¼²ã 180.png");
	image3= gcnew Image(L"¶¯×÷/¾²Ö¹×ó/Í¼²ã 260.png");
	image4 = gcnew Image(L"¶¯×÷/¾²Ö¹×ó/Í¼²ã 340.png");
	image5 = gcnew Image(L"¶¯×÷/¾²Ö¹×ó/Í¼²ã 420.png");
	still_left_pre->add(image1);
	still_left_pre->add(image2);
	still_left_pre->add(image3);
	still_left_pre->add(image4);
	still_left_pre->add(image5);
	still_left = new Animate(still_left_pre);


	//¼ÓÔØ±¼ÅÜ¶¯×÷
		//ÏòÓÒ
	auto run_right_pre = new Animation(0.1f);
	this->open(L"¶¯×÷/±¼ÅÜ×ó/run1.png");
	auto image6 = gcnew Image(L"¶¯×÷/±¼ÅÜ×ó/run2.png");
	auto image7 = gcnew Image(L"¶¯×÷/±¼ÅÜ×ó/run3.png");
	auto image8 = gcnew Image(L"¶¯×÷/±¼ÅÜ×ó/run4.png");
	auto image9 = gcnew Image(L"¶¯×÷/±¼ÅÜ×ó/run5.png");
	auto image10 = gcnew Image(L"¶¯×÷/±¼ÅÜ×ó/run6.png");
	auto image11 = gcnew Image(L"¶¯×÷/±¼ÅÜ×ó/run7.png");
	run_right_pre->add(image6);
	run_right_pre->add(image7);
	run_right_pre->add(image8);
	run_right_pre->add(image9);
	run_right_pre->add(image10);
	run_right_pre->add(image11);
	run_right = new Animate(run_right_pre);
		//Ïò×ó
	auto run_left_pre = new Animation(0.1f);
	this->open(L"¶¯×÷/±¼ÅÜÓÒ/run10.png");
	image6 = gcnew Image(L"¶¯×÷/±¼ÅÜÓÒ/run20.png");
	image7 = gcnew Image(L"¶¯×÷/±¼ÅÜÓÒ/run30.png");
	image8 = gcnew Image(L"¶¯×÷/±¼ÅÜÓÒ/run40.png");
	image9 = gcnew Image(L"¶¯×÷/±¼ÅÜÓÒ/run50.png");
	image10 = gcnew Image(L"¶¯×÷/±¼ÅÜÓÒ/run60.png");
	image11 = gcnew Image(L"¶¯×÷/±¼ÅÜÓÒ/run70.png");
	run_left_pre->add(image6);
	run_left_pre->add(image7);
	run_left_pre->add(image8);
	run_left_pre->add(image9);
	run_left_pre->add(image10);
	run_left_pre->add(image11);
	run_left = new Animate(run_left_pre);


	//¼ÓÔØÌøÔ¾¶¯×÷
		//ÓÒ±ß
	auto jump_right_pre = new Animation(0.06f);
	image1 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump2.png");
	image2 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump3.png");
	image3 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump4.png");
	image4 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump5.png");
	image5 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump6.png");
	image6 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump7.png");
	image7 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump8.png");
	image8 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump9.png");
	image9 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump10.png");
	image10 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump11.png");
	image11 = gcnew Image(L"¶¯×÷/ÌøÔ¾ÓÒ/jump12.png");
	jump_right_pre->add(image1);
	jump_right_pre->add(image2);
	jump_right_pre->add(image3);
	jump_right_pre->add(image4);
	jump_right_pre->add(image5);
	jump_right_pre->add(image6);
	jump_right_pre->add(image7);
	jump_right_pre->add(image8);
	jump_right_pre->add(image9);
	jump_right_pre->add(image10);
	jump_right_pre->add(image11);
	jump_right = new Animate(jump_right_pre);

	//×óÌø
	auto jump_left_pre = new Animation(0.06f);
	image1 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump2A.png");
	image2 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump3A.png");
	image3 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump4A.png");
	image4 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump5A.png");
	image5 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump6A.png");
	image6 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump7A.png");
	image7 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump8A.png");
	image8 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump9A.png");
	image9 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump10A.png");
	image10 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump11A.png");
	image11 = gcnew Image(L"¶¯×÷/ÌøÔ¾×ó/jump12A.png");
	jump_left_pre->add(image1);
	jump_left_pre->add(image2);
	jump_left_pre->add(image3);
	jump_left_pre->add(image4);
	jump_left_pre->add(image5);
	jump_left_pre->add(image6);
	jump_left_pre->add(image7);
	jump_left_pre->add(image8);
	jump_left_pre->add(image9);
	jump_left_pre->add(image10);
	jump_left_pre->add(image11);
	jump_left = new Animate(jump_left_pre);



	//¹¥»÷
		//ÓÒ±ß
	auto attack_right_pre = new Animation(0.05f);
	image1 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack2R.png");
	image2 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack3R.png");
	image3 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack4R.png");
	image4 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack5R.png");
	image5 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack6R.png");
	image6 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack7R.png");
	image7 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack8R.png");
	image8 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack9R.png");
	image9 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack10R.png");
	image10 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack11R.png");
	image11 = gcnew Image(L"¶¯×÷/¹¥»÷ÓÒ/attack1R.png");
	attack_right_pre->add(image11);
	attack_right_pre->add(image1);
	attack_right_pre->add(image2);
	attack_right_pre->add(image3);
	attack_right_pre->add(image4);
	attack_right_pre->add(image5);
	attack_right_pre->add(image6);
	attack_right_pre->add(image7);
	attack_right_pre->add(image8);
	attack_right_pre->add(image9);
	attack_right_pre->add(image10);
	attack_right = new Animate(attack_right_pre);


		//×ó±ß
	auto attack_left_pre = new Animation(0.05f);
	image1 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack2L.png");
	image2 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack3L.png");
	image3 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack4L.png");
	image4 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack5L.png");
	image5 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack6L.png");
	image6 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack7L.png");
	image7 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack8L.png");
	image8 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack9L.png");
	image9 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack10L.png");
	image10 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack11L.png");
	image11 = gcnew Image(L"¶¯×÷/¹¥»÷×ó/attack1L.png");
	attack_left_pre->add(image11);
	attack_left_pre->add(image1);
	attack_left_pre->add(image2);
	attack_left_pre->add(image3);
	attack_left_pre->add(image4);
	attack_left_pre->add(image5);
	attack_left_pre->add(image6);
	attack_left_pre->add(image7);
	attack_left_pre->add(image8);
	attack_left_pre->add(image9);
	attack_left_pre->add(image10);
	attack_left = new Animate(attack_left_pre);

	//³õÊ¼»¯°´¼ü
	run = 0;	//ÊÇ·ñ´¦ÓÚ±¼ÅÜ×´Ì¬
	direction = 1;//·½Ïò×´Ì¬ ³õÊ¼ÎªÓÒ
	A = 0;
	D = 0;
	K = 0;
	enable = 1;
	time_attack = 0;
	J = 0;
	zhen = 0;
	fall = 0; 
	blood = 100;
	frame_hurt = 122;
	frame_still = 0;


	this->runAction(gcnew Loop(still_right));
}


void Character1::setHurt()
{
	this->frame_hurt = 0;
	
}


//Ö¡¸üÐÂ¶¯×÷

void Character1::onUpdate()
{
	if ( frame_hurt < 120) 
	{
		
		short frame = frame_hurt % 40;
		if (frame < 20)
			this->setOpacity(1 - frame * 0.04);
		else
			this->setOpacity(0.24 + (frame - 20) * 0.04);
		this->frame_hurt++;
		
	}
	if (frame_still >= 0)		frame_still++;
	if (K  && zhen<40)
		 zhen += 1, this->setPosY(this->getPosY() + (zhen - 20.5) * 1);
	if (zhen == 41 && fall)
		this->setPosY(this->getPosY() + 20),frame_still = -1;
	if(zhen == 42 )
		this->setPosY(this->getPosY() - 15),frame_still = -1;
	if (J)
		time_attack += Time::getDeltaTime(); 
	if (Input::isDown(KeyCode::J))
	{
		if (!(K+J))
		{
			frame_still = -1;
			J = 1;
			this->stopAllActions();
			if (direction)
				this->runAction(attack_left->clone());
			else
				this->runAction(attack_right->clone());
		}

	}
	if (Input::isDown(KeyCode::K))
	{	
		if (!(K+J) && (fall<2) && zhen!=40 )
		{
			frame_still = -1;
			fall = 2;
			//if(fall)	fall++;
			K = 1;
			zhen = 0;
			this->stopAllActions();
			if (direction)
				this->runAction(jump_left ->clone());//¸Ä
			else
				this->runAction(jump_right->clone());

		}
	}
	if (Input::isDown(KeyCode::A) && !(D+J))
	{
		if (!(A+D))
		{
			frame_still = -1;
			if (!K)
			{
				this->stopAllActions();
				this->runAction(gcnew Loop(run_left->clone()));
			}
			direction = 1;
			run = 1;
			A = 1;
		}
		if(this->getPosX() >0)
			this->movePosX(-6);
	}
	else if (Input::isDown(KeyCode::D)&& !(A+J) )
	{
		if (!(A+D))
		{
			frame_still = -1;
			if(!K)
			{
				this->stopAllActions();
				this->runAction(gcnew Loop(run_right->clone()));
			}
			direction = 0;
			run = 1;
			D = 1;
		}
		if(this->getPosX() <1000)
			this->movePosX(6);
	}
	if ((Input::isRelease(KeyCode::A) ||
		Input::isRelease(KeyCode::D) ) 
		)
	{
		if (!(K+J))

		{
			this->stopAllActions();
			frame_still = 0;
			if (direction)
				this->runAction(gcnew Loop(still_left->clone()));
			else
				this->runAction(gcnew Loop(still_right->clone()));
		}
		run = 0;

		if (Input::isRelease(KeyCode::D))
			D = 0;
		else if (Input::isRelease(KeyCode::A))
			A = 0;
	}

	if (zhen ==40  )
	{
		A = 0, K = 0, D = 0;
		zhen = 0;
		if(frame_still <0)	frame_still = 0;
		this->stopAllActions();
		if (direction)
			this->runAction(gcnew Loop(still_left->clone()));
		else
			this->runAction(gcnew Loop(still_right->clone()));
	}
	if (time_attack >= 0.52)
	{
		frame_still = 0;
		J = 0, time_attack = 0;
		this->stopAllActions();
		if (direction)
			this->runAction(gcnew Loop(still_left->clone()));
		else
			this->runAction(gcnew Loop(still_right->clone()));
	}


}