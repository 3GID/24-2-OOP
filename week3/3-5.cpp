#include <iostream>
int main()
{
	int y = 5;
	int& x = y;

	std::cout << x << std::endl;
}//�ǽ� 5 : int& x �� ����� rvalue�� �ٷ� ������ �� �����Ƿ� lvalue�� �����ϵ��� ����