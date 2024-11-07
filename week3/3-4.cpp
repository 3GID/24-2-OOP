#include <iostream>
int& func(int& a) {
	return ++a;
}
int main() {
	int x = 1;
	std::cout << func(x) << std::endl;
	std::cout << x << std::endl;
}

//실습 4-1 : lvalue : a,b,c rvalue = 5,a+b a,b,c는 변수를 나타냄
//실습 4-2 : 기존 func 함수는 return값으로 rvalue를 반환하기에 int&형으로 바꾸어 lvalue 참조