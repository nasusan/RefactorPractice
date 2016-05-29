#include "stdafx.h"
#include "Mtc.h"
#include "SceneManager.h"

namespace Mtc
{
	void (*MtcCoRoutine)() = nullptr;

	void setCallback( void(*pfunc)(void) )
	{
		MtcCoRoutine = pfunc;
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

	void run()
	{
		if (MtcCoRoutine != nullptr)
			MtcCoRoutine();
	}

	void wait()
	{

	}
}