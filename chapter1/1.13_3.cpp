#include <iostream>

int main()
{
	int i, j;
	std::cout << "Input two integer" << std::endl;			//��ӡָ����Χ������
	std::cin >> i >> j;

	for (; i != j; ++i)
		std::cout << i << std::endl;
}