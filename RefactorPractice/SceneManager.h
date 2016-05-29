#pragma once
class SceneManager
{
public:
	SceneManager();
	~SceneManager();

private:

	///	privateメソッド

	void PrintCounter();
	void ResetCounter();
	void ProcessCounter();

private:

	///<	private メンバ

	int _count = 0;

};


void SceneFeiber(void);