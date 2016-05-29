// RefactorPractice.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "TaskController.h"
#include "SceneManager.h"

int main()
{
	TaskController taskController;
		
	taskController.setCallback(SceneManager::SceneFeiber);
	taskController.run();

	return 0;
}

