#include <iostream>

int main()
{
	int i, j = 0;
	std::cout << "Input numbers, Ctrl + Z to end input" << std::endl;		//���һ�����ĺ�
	while (std::cin >> i)
		j += i;
	std::cout << j << std::endl;
}