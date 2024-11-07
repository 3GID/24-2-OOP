#include <iostream>
int main() {
	int num = 10;
	std::cout << "int num 주소 : 0x" << &num << std::endl \
		<< "int num 값 : " << num << std::endl << std::endl;
	int& ref = num;
	std::cout << "레퍼런스 주소 : 0x" << &ref << std::endl \
		<< "레퍼런스가 참조하는 값 : " << ref << std::endl << std::endl;
	int* ptr = &num;
	std::cout << "포인터 주소 : 0x" << &ptr << std::endl \
		<< "포인터가 참조하는 값 : " << *ptr << std::endl;
	return 0;
}
//실습 7 : 직접적으로 변수에 참조하는 레퍼런스와 달리 포인터는 간접적으로 참조하여 주소의 값이 다르다