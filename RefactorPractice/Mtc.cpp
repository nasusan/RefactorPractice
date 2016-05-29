#include "stdafx.h"
#include "Mtc.h"

/**
 * Callback, called when the set.
 *
 * @author	Code Geass
 * @date	2016/05/29
 *
 * @param [in,out]	pfunc	If non-null, the pfunc.
 */

void Mtc::setCallback(void(*pfunc)(void))
{
	_MtcCoRoutine = pfunc;
}

/**
 *	Mtcの本体
 *	登録されているコルーチンを順に実行する
 *
 *	ここをStrategyかTemplateMethodで置き換えてないのが深い闇の元
 *
 * @author	Code Geass
 * @date	2016/05/29
 */

void Mtc::run()
{
	if (_MtcCoRoutine == nullptr)
	{
		std::cout << "Mtc::run()" << std::endl;
		std::cout << "					no coroutines." << std::endl;
		return;
	}

	_MtcCoRoutine();
}

void Mtc::wait()
{

}
