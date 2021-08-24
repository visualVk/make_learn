#include <iostream>
#include "xthread.h"

using namespace std;

void XThread::start()
{
	cout << "start" << endl;
	th_ = thread(&XThread::Main, this);
}

void XThread::wait()
{
	cout << "wait begin" << endl;
	th_.join();
	cout << "wait end" << endl;
}
