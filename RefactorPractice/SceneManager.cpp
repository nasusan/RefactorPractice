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
 * シーンマネージャの更新処理、ファイバから呼び出される
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
//			Mtc登録用関数
//			Mtcに登録するためにクラスに入れずただの関数にしている 
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
