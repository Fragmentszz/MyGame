#include"textbox.h"


Textbox::Textbox(String description)
{
	this->open(L"�ز�/�ı���.png");
	dscrp = description;
	text = gcnew Text(dscrp);
	text->setPos(66, 50);
	this->addChild(text);

}