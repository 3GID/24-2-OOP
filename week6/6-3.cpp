#include <iostream>
#include <string>

class a {
private:
	int num;
public:
	a(int num) : num(num) {//a 생성자
		std::cout << "Constructor()" << std::endl;
	}
	~a() {//a 소멸자
		std::cout << "Distructor()" << std::endl;
	}
};

int main() {
	try {//try문 객체생성 및 throw로 10값을 catch문으로 보냄
		a a(1);
		throw 10;
	}
	catch(int e){//catch문 throw값을 출력
		std::cout << "Catch " << e << std::endl;

	}

}