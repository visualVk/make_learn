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
	thread th(ThreadMain);
	cout << "first make file" << endl;
	th.join();
	return 0;
}
