// RefactorPractice.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "Mtc.h"
#include "SceneManager.h"

int main()
{
	Mtc mtc;
	//SceneManager sceneManager; 
		
	mtc.setCallback(SceneManager::SceneFeiber);
	mtc.run();

	return 0;
}

