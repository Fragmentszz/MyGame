#include"ContinueGame.h"
#include"Map.h"

extern int consequence;

ContinueGame::ContinueGame()
{
	auto nomal = gcnew Sprite(L"ËØ²Ä/¼ÌÐøÓÎÏ·_nomal.png");	
	auto selected = gcnew Sprite(L"ËØ²Ä/¼ÌÐøÓÎÏ·_selected.png");
	this->setNormal(nomal);
	this->setMouseOver(selected);
	auto callback = [&]() {
		auto file = fopen("consequence.txt","rb");
		if (file != nullptr && ! feof(file))
		{
			consequence = 0;
			for (short i = 0; i < 2; i++)
				consequence += (fgetc(file) - '0') * (2 - i);
			auto scne = gcnew Map();
			auto sce_transition = gcnew BoxTransition(1);
			SceneManager::enter(scne,sce_transition);
		}
		fclose(file);
	};
	this->setClickFunc(callback);
}