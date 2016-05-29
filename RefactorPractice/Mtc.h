#pragma once


class Mtc
{
public:
	void setCallback( void(func)(void)  );
	void run();
	void wait();

private:
	void(*_MtcCoRoutine)() = nullptr;

};


