#include <iostream>
#include <string>

using namespace std;

void individual()
{
	string context = "test01";
	int i = 0;
	int q = 1;
	int j = 0;

	for (; i < 20; ++i)
	{
		//changes
		for (; j < 20; ++j)
		{
			context = context + i + j;
			cout << "new" << endl;
			cout << "update" << endl;
		}
	}
}