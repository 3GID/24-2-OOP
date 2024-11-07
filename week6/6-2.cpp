#include <iostream>
#include <string>
#include <exception>

class Exception : public std::exception{//exception 상속
public:
	const char* what() {
		return "New Exception";//new exception 반환함수
	}

};
int main() {
	
	try {
		Exception e;
		throw e.what();//throw로 e.what을 던짐
	}
	catch (const char* e){
		std::cout << "My exception is ";
		std::cout << e << std::endl;
		

	}
}