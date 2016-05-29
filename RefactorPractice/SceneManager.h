#pragma once

#ifndef ___SCENE_MANAGER_H_INCLUDED___
#define ___SCENE_MANAGER_H_INCLUDED___

class SceneManager
{
public:

	SceneManager();
	~SceneManager();

	static void SceneFeiber(void); 

private:

	///	privateメソッド

	static void PrintCounter();
	static void ResetCounter();
	static void ProcessCounter();

private:

	///<	private メンバ

	static int _count;

};




#endif
