// RefactorPractice.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "Mtc.h"
#include "SceneManager.h"

int main()
{
	Mtc mtc;
		
	mtc.setCallback(SceneManager::SceneFeiber);
	mtc.run();

	return 0;
}

