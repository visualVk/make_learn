#include <iostream>
#include <thread>
#include "XData.h"
using namespace std;

void ThreadMain()
{
	cout << "Main Thread" << endl;
}

int main(int argc, char *argv[])
{
	thread th(ThreadMain);
	cout << "first make file" << endl;
	th.join();
	XData xdata;
	return 0;
}
