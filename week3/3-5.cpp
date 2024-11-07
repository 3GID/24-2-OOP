#include <iostream>
int main()
{
	int y = 5;
	int& x = y;

	std::cout << x << std::endl;
}//실습 5 : int& x 는 상수인 rvalue를 바로 참조할 수 없으므로 lvalue를 참조하도록 변경