#include"forest.h"

Forest::Forest()
{
	this->open(L"scene1.png");
	this->setScale(2.0f);
	this->setAnchor(0.5f, 0.5f);

	//shitai = gcnew  Shitai();
	this->addChild(shitai);
	shitai->setPos(Point(100, 650));
}


