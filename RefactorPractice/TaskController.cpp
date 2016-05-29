#include "stdafx.h"
#include "TaskController.h"

/**
 * Callback, called when the set.
 *
 * @author	Code Geass
 * @date	2016/05/29
 *
 * @param [in,out]	pfunc	If non-null, the pfunc.
 */

void TaskController::setCallback(void(*pfunc)(void))
{
	_coRoutine = pfunc;
}

/**
 *	TaskControllerの本体
 *	登録されているコルーチンを順に実行する
 *
 *	ここをStrategyかTemplateMethodで置き換えてないのが深い闇の元
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

void TaskController::run()
{
	if (_coRoutine == nullptr)
	{
		std::cout << "TaskController::run()" << std::endl;
		std::cout << "					no coroutines." << std::endl;
		return;
	}

	_coRoutine();
}

void TaskController::wait()
{

}
