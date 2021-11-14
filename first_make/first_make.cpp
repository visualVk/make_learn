#include <cstdio>
#include <iostream>
#include <thread>
#include "XData.h"
#include "test.h"
using namespace std;

void ThreadMain()
{
	cout << "Main Thread" << endl;
}

int main(int argc, char *argv[])
{
	char path[] = CONFIG;
	printf("path = %s\n", path);
	thread th(ThreadMain);
	cout << "first make file" << endl;
	th.join();
	XData *xdata = new XData();
	return 0;
}
