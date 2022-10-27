#include "GameScene.h"
GameScene::GameScene()
{
	//Ìí¼Ó±³¾°
	//auto background = gcnew Sprite(L"")

	auto man = gcnew Man();
	this->addChild(man);
}