#include <iostream>
#include <string>
#include <exception>

class a {

private:
	int num1;
public:

	a(int num) : num1(num) {//a ������

	}

	a operator++() {//prefix ����
		num1++;
		return *this;

	}
	a operator++(int) {//postfix ����
		++num1;
		return *this;
	}
	int getnum() {//num ��ȯ
		return num1;
	}


};

int main() {
	a a(5);
	std::cout <<"a = "<< a.getnum() << std::endl;//�⺻�����
	a++;
	std::cout <<"a++ = " << a.getnum() << std::endl;//a++���
	++a;
	std::cout <<"++a = " << a.getnum() << std::endl;//++a ���





}