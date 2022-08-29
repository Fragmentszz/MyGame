#include"Volume_Button.h"


Volume_Button::Volume_Button()
{
	auto nomal = gcnew Sprite(L"素材/选项_nomal.png");
	auto selected = gcnew Sprite(L"素材/选项_selected.png");
	this->setNormal(nomal);
	this->setMouseOver(selected);
	/**evnt = new MouseDown_button();
	auto callback = [this]() {
		this->dispatch(evnt);
	};

	this->setClickFunc(callback);**/

	auto callback1 = [&](Event* evt)
	{
		if (evt->type == Event::MouseDown)
		{
			Button_Down = 1;
		}
		if( evt->type == Event::MouseUp && Button_Down)
			Button_Down = 0;
	};

	lis = gcnew Listener();
	lis->setCallback(callback1);
	this->addListener(lis);


	Button_Down = 0;
}

void Volume_Button::onUpdate()
{
	isSelected = _isSelected;
}
