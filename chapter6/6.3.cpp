#include <iostream>

using namespace std;

int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main()			//test the fact
{
	cout << fact(5) << endl;
}