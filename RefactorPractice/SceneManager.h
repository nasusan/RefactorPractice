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

	///	private���\�b�h

	static void PrintCounter();
	static void ResetCounter();
	static void ProcessCounter();

private:

	///<	private �����o

	static int _count;

};




#endif
