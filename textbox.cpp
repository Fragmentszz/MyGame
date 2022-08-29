#include"textbox.h"


Textbox::Textbox(String description)
{
	this->open(L"ËØ²Ä/ÎÄ±¾¿ò.png");
	dscrp = description;
	text = gcnew Text(dscrp);
	text->setPos(66, 50);
	this->addChild(text);

}