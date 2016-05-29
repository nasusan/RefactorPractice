#pragma once
class SceneManager
{
public:

	SceneManager();
	~SceneManager();

	static void SceneFeiber(void); 

private:

	///	privateメソッド

	void PrintCounter();
	void ResetCounter();
	void ProcessCounter();

private:

	///<	private メンバ

	int _count = 0;

};


