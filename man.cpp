#include "man.h"
Man::Man()
{
	this->open(L"mianCharacterRight.png");
	this->setAnchor(0.5f, 0.5f);
	this->setPos(10,840);
	this->setScale(0.3);
}

void Man::onUpdate()
{
	//this->movePosY(this->speed);
	//this->speed += 0.4f;

	//----------------------防止角色出屏幕------------------------//
	/*
	float halfWidth = this->getWidth() / 2;
	float halfHeight = this->getHeight() / 2;
	if (this->getPosX() + halfWidth >= Window::getWidth())
	{
		speed = -speed;
		this->setPosX(Window::getWidth() - halfWidth-1);
	}
	else if (this->getPosX() - halfWidth <= 0)
	{
		speed = -speed;
		this->setPosX(halfWidth +1 );
	}

	if (this->getPosY() + halfWidth >= Window::getHeight())
	{
		speed = -speed;
		this->setPosY(Window::getHeight() - halfHeight -1);
	}
	else if (this->getPosY() - halfHeight <= 0)
	{
		speed = -speed;
		this->setPosY(halfHeight +1);
	}*/
	//----------------------------------------------------------//
	if (Input::isDown(KeyCode::Space))
	{

			this->movePosY(-2);
		
	}
	else if (Input::isDown(KeyCode::S))
	{
		// Man 的 Y 坐标增加 2
		this->movePosY(2);
	}

	if (Input::isDown(KeyCode::A))
	{
		// Man 的 X 坐标减少 2
		this->open(L"mianCharacterLeft.png");
		this->movePosX(-2);
	}
	else if (Input::isDown(KeyCode::D))
	{
		// Man 的 X 坐标增加 2
		this->open(L"mianCharacterRight.png");
		this->movePosX(2);
	}
};

Man::~Man() 
{
	//释放曾经保留动画
	//rotate->release();
}
