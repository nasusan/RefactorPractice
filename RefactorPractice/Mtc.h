#pragma once

#ifndef ___MTC_H_INCLUDED___
#define ___MTC_H_INCLUDED___

class Mtc
{
public:
	void setCallback( void(func)(void)  );
	void run();
	void wait();

private:
	void(*_MtcCoRoutine)() = nullptr;
};


#endif