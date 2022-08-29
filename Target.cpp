#include"Target.h"


Target::Target(float x,float y,float length,short id,const String description,const String filepath)
{
	X = x, Y = y, Length = length,collected = 0,ID=id;
	this->open(filepath);
	this->setAnchor(0.5, 1);
	this->movePos(X, Y);
	Cue = new TextCue(L"°´EÊ°Æð");
	Cue->setPos(this->getWidth() / 2,0);
	Cue->setVisible(0);
	this->addChild(Cue);
}

bool Target::Nearthis(float x, float y)
{
	if (x <= this->getPosX() + Length && this->getPosX()-10 <= x && abs(y - this->getPosY())< 10 && !collected)
	{
		//collected = 1;
		//this->runAction(gcnew FadeOut(1.5f));
		auto parent = this->getParent();
		switch (ID)
		{
			case 1:
			{
				auto nearthis = new NearTarget1();
				parent->dispatch(nearthis);
				delete nearthis;
				break;
			}
			case 2:
			{
				printf("%f,%f,%f,%f\n", this->getPosX(), this->getPosY(),x,y);
				auto nearthis = new NearTarget2();
				parent->dispatch(nearthis);
				delete nearthis;
				break;
			}
			case 3:
			{
				auto nearthis = new NearTarget3();
				parent->dispatch(nearthis);
				delete nearthis;
				break;
			}
			case 4:
			{
				auto nearthis = new NearTarget4();
				parent->dispatch(nearthis);
				delete nearthis;
				break;
			}

		}
		return 1;
	}
	return 0;
}