#pragma once
class SceneManager
{
public:

	SceneManager();
	~SceneManager();

	static void SceneFeiber(void); 

private:

	///	private���\�b�h

	void PrintCounter();
	void ResetCounter();
	void ProcessCounter();

private:

	///<	private �����o

	int _count = 0;

};


