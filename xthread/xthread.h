#ifndef XTHREAD_H
#define XTHREAD_H
#include <thread>
class XThread
{
public:
	virtual void start();
	virtual void wait();
private:
	virtual void Main()=0;
	std::thread th_;
};

#endif
