#include <iostream>

int main()
{
	int i, j;
	std::cout << "Input two integer" << std::endl;			//��ӡָ����Χ������
	std::cin >> i >> j;

	while (i != j)
	{
		std::cout << i << std::endl;
		++i;
	}
}