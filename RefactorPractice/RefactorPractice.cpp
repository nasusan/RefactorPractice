// RefactorPractice.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
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

