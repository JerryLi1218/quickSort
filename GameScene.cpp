#include "GameScene.h"
GameScene::GameScene()
{
	//��ӱ���
	//auto background = gcnew Sprite(L"")

	auto man = gcnew Man();
	this->addChild(man);
}