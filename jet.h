#include<easy2d/easy2d.h>
using namespace easy2d;

class Jet :
	public Sprite
{
public:
	Jet( float posx, float posy,float length,String filepath = L"");
	void OnJetAction();
	float Length;
	bool Nearthis(float X, float Y);
	void onUpdate();
protected:
	short jet_frame;
	bool jet_ready;
};