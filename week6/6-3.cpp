#include <iostream>
#include <string>

class a {
private:
	int num;
public:
	a(int num) : num(num) {//a ������
		std::cout << "Constructor()" << std::endl;
	}
	~a() {//a �Ҹ���
		std::cout << "Distructor()" << std::endl;
	}
};

int main() {
	try {//try�� ��ü���� �� throw�� 10���� catch������ ����
		a a(1);
		throw 10;
	}
	catch(int e){//catch�� throw���� ���
		std::cout << "Catch " << e << std::endl;

	}

}