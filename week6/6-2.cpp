#include <iostream>
#include <string>
#include <exception>

class Exception : public std::exception{//exception ���
public:
	const char* what() {
		return "New Exception";//new exception ��ȯ�Լ�
	}

};
int main() {
	
	try {
		Exception e;
		throw e.what();//throw�� e.what�� ����
	}
	catch (const char* e){
		std::cout << "My exception is ";
		std::cout << e << std::endl;
		

	}
}