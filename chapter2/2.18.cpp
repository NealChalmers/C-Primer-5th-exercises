#include <iostream>

int main()
{
	int *p, q = 5, r = 4;
	p = &r;
	std::cout << *p << " " << p << std::endl;		//����ָ���ֵ��ָ������ֵ
	p = &q;
	std::cout << *p << " " << p << std::endl;
}