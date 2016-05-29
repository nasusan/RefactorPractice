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
//	std::cout << "未初期化の_count は、" << _count << "です。" << std::endl;
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
 * ここをFeiberで回す
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
		// SceneFeiber()をstaticにすると、
		// その中では、クラスの実態がないため、メンバ関数が呼べなくなる
		// (当然全部staticにすれば呼べる)
		// 
		SceneManager::ProcessCounter();
		SceneManager::PrintCounter();
		// Mtc::wait(1)	
	}
}
