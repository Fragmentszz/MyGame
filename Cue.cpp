#include"Cue.h"


TextCue::TextCue(String description)
{
	this->open(L"ËØ²Ä/Cue.png");
	this->setAnchor(0.5, 1);

	auto text = gcnew Text(description);
	text->setPos(15, 15);
	text->setFontSize(15);
	this->addChild(text);
}