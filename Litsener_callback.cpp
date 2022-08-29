#include"Litsener_callback.h"
#include"Quit.h"

void callback_Esc(Event* evt)
{
	if (evt->type == Event::KeyDown )
	{
		auto eventz = (KeyDownEvent*)evt;
		if (eventz->key == KeyCode::Esc)
		{
			Game::pause();
			auto c = gcnew Menu();
			auto quit = gcnew Quit();
			c->addButton(quit);
		}
	}
}
