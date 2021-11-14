#include <iostream>
#include "Xthread.h"
using namespace std;

class XTask:XThread
{
public:
	void start() override
	{
		cout<<"x task" <<endl;
	}
	void wait() override
	{
		cout << "x task wait" << endl;
	}
};

int main(int argc, char *argv[])
{
	cout << "x server start!" << endl;
	return 0;
}
