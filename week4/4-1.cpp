#include <iostream>
using namespace std;
int i;

class A{

public:
	~A(){
		i = 10;
	}
};
class B{

public:
	~B(){
		i = 20;
	}
};

int foo(){
	i = 3;
	A a;
	B b;
	return i;
}

int main(){
	cout << foo() << endl;
	return 0;
}
//i=3 �Ҹ��ڰ� ȣ��Ǳ����� ��ȯ�ȴ�