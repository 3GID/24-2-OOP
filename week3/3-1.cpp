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
}//�ǽ� 1 : increment�� �Ű������� ������ �� ���� �����ֹǷ� int x = 55�� ���� ������� �ʴ´�.