#include <iostream>
void increment(int& x)
{
	++x;
}
int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(x);
	std::cout << " After increment: " << x << std::endl;
	system("pause");
	return 0;
}
//실습 3 : 매개변수를 참조하여 더하게하여 int x의 값을 변경시킴