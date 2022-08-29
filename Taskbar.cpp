#include"Taskbar.h"

Taskbar::Taskbar(String  filepath)
{
	this->open(L"ËØ²Ä/±ß¿ò2.png");
	auto target = gcnew Sprite(filepath);
	target->setAnchor(0.5, 1);
	target->setPos(45, 50);

	this->addChild(target);
	this->setAnchor(0.5f, 1.0);


}

void Taskbar::Update()
{
	/**this->runAction(gcnew FadeOut(0.5f));
	this->open(L"ËØ²Ä/±ß¿ò2.png");
	this->runAction(gcnew FadeIn(0.5f));**/
	auto gou = gcnew Sprite(L"ËØ²Ä/¶ÔºÅ.png");
	gou->setOpacity(0);
	gou->setAnchor(0.5, 1);
	gou->setPos(40, 50);
	this->addChild(gou);
	gou->runAction(gcnew FadeIn(1.0));
}