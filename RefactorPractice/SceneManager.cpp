#include "stdafx.h"
#include "SceneManager.h"
#include "Mtc.h"

/**
 * Default constructor.
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

SceneManager::SceneManager()
{
}

/**
 * Destructor.
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

SceneManager::~SceneManager()
{
}

/**
 * Prints this object.
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

void SceneManager::PrintCounter()
{
	std::cout << "hoge" << std::endl;
}

/**
 * Resets the counter. 
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

void SceneManager::ResetCounter()
{
	_count = 0;
}


/**
 * �V�[���}�l�[�W���̍X�V�����A�t�@�C�o����Ăяo�����
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

void SceneManager::ProcessCounter()
{
	_count++;
}

//////////////////////////////////////////////////////////////////////////
//
//			Mtc�o�^�p�֐�
//			Mtc�ɓo�^���邽�߂ɃN���X�ɓ��ꂸ�����̊֐��ɂ��Ă��� 
// 
//////////////////////////////////////////////////////////////////////////

/**
 * Scene feiber.
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

void SceneFeiber(void)
{
	std::cout << "This is SeceFeiber()." << std::endl;

	while (true)
	{
		Mtc::wait();
	}
}
