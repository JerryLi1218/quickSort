#pragma once
#include <easy2d/easy2d.h>
using namespace easy2d;
class Man : public Sprite
{
public:
	Man();
	~Man();
	void onUpdate();
	enum class Status
	{
		Jump,
		Move,
	};

public:
	bool living;
	float speed;
	Action* move;
	Action* Ajump;
	Action* rotate;

};