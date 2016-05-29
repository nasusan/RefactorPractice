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
	 *	Mtc�̖{��
	 *	�o�^����Ă���R���[�`�������Ɏ��s����
	 * 
	 *	������Strategy��TemplateMethod�Œu�������ĂȂ��̂��[���ł̌�
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