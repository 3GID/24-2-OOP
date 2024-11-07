#include <iostream>
#include <string>
#include <exception>

class a {

private:
	int num1;
public:

	a(int num) : num1(num) {//a 생성자

	}

	a operator++() {//prefix 구현
		num1++;
		return *this;

	}
	a operator++(int) {//postfix 구현
		++num1;
		return *this;
	}
	int getnum() {//num 반환
		return num1;
	}


};

int main() {
	a a(5);
	std::cout <<"a = "<< a.getnum() << std::endl;//기본값출력
	a++;
	std::cout <<"a++ = " << a.getnum() << std::endl;//a++출력
	++a;
	std::cout <<"++a = " << a.getnum() << std::endl;//++a 출력





}