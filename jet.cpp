#include"jet.h"

Jet::Jet(float posx, float posy, float length,String filepath )
{
	this->open(filepath);
	Length=length;
	this->setAnchor(0.5, 1);
	this->setPos(posx, posy);

	jet_frame = 0;
	jet_ready = 1;
}


bool Jet::Nearthis(float X, float Y)
{
	if (X <= this->getPosX() + Length && X >= this->getPosX() && abs(Y - this->getPosY()) < 10)
		return 1;
	return 0;
}


void Jet::OnJetAction()
{
	if (jet_ready)
	{
		jet_ready = 0;
		auto seq = gcnew Sequence();
		auto less = gcnew ScaleTo(0.15, 1, 0.5);
		auto more = gcnew ScaleTo(0.15, 1, 1);
		seq->add({ less,more });
		this->runAction(seq);
	}
}
void Jet::onUpdate()
{
	if (!jet_ready)
		jet_frame++;
	if (jet_frame >60)
		jet_ready = 1, jet_frame = 0;

}