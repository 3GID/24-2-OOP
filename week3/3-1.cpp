#include <iostream>
void increment(int x)
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
}//실습 1 : increment는 매개변수를 복사한 후 값을 더해주므로 int x = 55의 값은 변경되지 않는다.