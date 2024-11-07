#include <iostream>
void increment(int* x)
{
	++(*x);
}
int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(&x);
	std::cout << " After increment: " << x << std::endl;
	system("pause");
	return 0;
}
//실습 2 : increment 함수의 매개변수를 포인터를 사용하여 값을 더해주고 increment로 선언된 변수의 주소에 해당하는 값을 변경시킴  