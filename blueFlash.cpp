#include <iostream>
#include <easy2d/easy2d.h>
#include "man.h"
using namespace easy2d;

int main()
{
	// 初始化窗口
	if (Game::init(L"BlueFlash", 1600, 900))
	{
		auto scene = gcnew Scene;                   // 创建一个场景
		SceneManager::enter(scene);
		//auto sprite = gcnew Sprite(L"background.jpg");
		// 把精灵添加到场景中
		auto sprite = gcnew Man;
		scene->addChild(sprite);
		// 设置窗口图标
		//Window::setIcon(IDI_ICON1);

		// 加载图片和音乐资源
		//ResLoader::init();
		// 修改节点默认中心点，便于让图片居中显示
		Node::setDefaultAnchor(0.5f, 0.5f);

		// 创建 Splash 场景
		//auto scene = gcnew SplashScene();
		// 创建淡入淡出式的场景切换动画
		auto transition = gcnew FadeTransition(1);
		// 进入 Splash 场景
		//SceneManager::enter(scene, transition);

		// 开始游戏
		Game::start();
	}
	// 回收游戏资源
	Game::destroy();
	return 0;
}

