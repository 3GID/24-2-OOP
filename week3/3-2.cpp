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
//�ǽ� 2 : increment �Լ��� �Ű������� �����͸� ����Ͽ� ���� �����ְ� increment�� ����� ������ �ּҿ� �ش��ϴ� ���� �����Ŵ  