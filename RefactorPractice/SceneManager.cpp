#include "stdafx.h"
#include "SceneManager.h"


int SceneManager::_count = 0;

/**
 * Default constructor.
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

SceneManager::SceneManager()
{
//	std::cout << "����������_count �́A" << _count << "�ł��B" << std::endl;
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
	std::cout << _count << std::endl;
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
 * ������Feiber�ŉ�
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

void SceneManager::SceneFeiber(void)
{
	std::cout << "SceneFeiber is running....." << std::endl;

	SceneManager::PrintCounter();

	while (true)
	{
		// SceneFeiber()��static�ɂ���ƁA
		// ���̒��ł́A�N���X�̎��Ԃ��Ȃ����߁A�����o�֐����ĂׂȂ��Ȃ�
		// (���R�S��static�ɂ���ΌĂׂ�)
		// 
		SceneManager::ProcessCounter();
		SceneManager::PrintCounter();
		// Mtc::wait(1)	
	}
}
