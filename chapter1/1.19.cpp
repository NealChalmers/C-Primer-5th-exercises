#include <iostream>

int main()
{
	int i, j;
	std::cout << "Input two integer" << std::endl;			//��ӡָ����Χ������
	std::cin >> i >> j;
	if (i > j)
	{
		int k;
		k = i;
		i = j;
		j = k;
	}
	while (i!=j)
	{
		std::cout << i << std::endl;
		++i;
	}
}