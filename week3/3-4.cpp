#include <iostream>
int& func(int& a) {
	return ++a;
}
int main() {
	int x = 1;
	std::cout << func(x) << std::endl;
	std::cout << x << std::endl;
}

//�ǽ� 4-1 : lvalue : a,b,c rvalue = 5,a+b a,b,c�� ������ ��Ÿ��
//�ǽ� 4-2 : ���� func �Լ��� return������ rvalue�� ��ȯ�ϱ⿡ int&������ �ٲپ� lvalue ����