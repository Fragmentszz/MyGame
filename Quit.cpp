#include"Quit.h"

extern int consequence;

Quit::Quit()
{
	auto nomal = gcnew Sprite(L"ËØ²Ä/ÍË³ö_nomal.png");
	auto selected = gcnew Sprite(L"ËØ²Ä/ÍË³ö_selected.png");
	this->setNormal(nomal);
	this->setMouseOver(selected);
	auto callback = []() {
		auto file = fopen("consequence.txt", "w");
		if (file != nullptr && !feof(file))
		{
			for (short i = 0; i < 2; i++)
			{
				fputc((consequence /(2-i)) % 2 + '0',file);
			}
				
		}
		fclose(file);
		Game::destroy();
	};

	this->setClickFunc(callback);

}