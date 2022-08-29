#pragma once
#include<easy2d/easy2d.h>
using namespace easy2d;




enum MyeventType
{
	First = Event::Type::Last + 1,
	Second = Event::Type::Last + 2,
	Third = Event::Type::Last + 3,
	Target1 = Event::Type::Last + 4,
	Target2  = Event::Type::Last + 5,
	Target3 = Event::Type::Last +6,
	Target4 = Event::Type::Last+7,
};


struct NearJet :
	public Event
{
public:
	NearJet() : Event(MyeventType::First) {}
};

struct End_event :
	public Event
{
public:
	End_event() :Event(MyeventType::Second) {}
};


struct NearTarget1:
	public Event
{
public:
	NearTarget1() :Event(MyeventType::Target1) {}
};

struct NearTarget2 :
	public Event
{
public:
	NearTarget2() :Event(MyeventType::Target2) {}
};


struct NearTarget3 :
	public Event
{
public:
	NearTarget3() :Event(MyeventType::Target3) {}
};

struct NearTarget4 :
	public Event
{
public:
	NearTarget4() :Event(MyeventType::Target4) {}
};