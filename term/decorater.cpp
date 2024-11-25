#include <iostream>
#include <string>
using namespace std;
class computer { // 인터페이스 구성
public:
	virtual ~computer() {
	}
	virtual int cost() = 0;
	virtual string option() = 0;

};
class component : public computer { // 기본 컴퓨터 구조
public:
	string option() override {
		return "COMPUTER";
	}
	int cost() override {
		return 500000;
	}
};
class decorator : public computer { //데코레이터가 cimputer 객체를 참조할 수 있도록 함
protected:
	computer* comp;
public:
	decorator(computer* com) : comp(com) {}
};
class ram : public decorator { // 각각의 데코레이터를 computer 객체의 동적으로 추가
public:
	ram(computer* com) : decorator(com){}
	string option() override {
		return "RAM" + comp->option() ;
	}
	int cost() override {
		return comp->cost() + 50000;
	}
};
class ssd : public decorator { // 각각의 데코레이터를 computer 객체의 동적으로 추가
public:
	ssd(computer* com) : decorator(com) {}
	string option() override {
		return  "SSD" + comp->option();
	}
	int cost() override {
		return comp->cost() + 80000;
	}
};
class gpu : public decorator { // 각각의 데코레이터를 computer 객체의 동적으로 추가
public:
	gpu(computer* com) : decorator(com) {}
	string option() override {
		return "GPU" + comp->option();
	}
	int cost() override {
		return comp->cost() + 200000;
	}
};


int main() {
	char Ram, Ssd, Gpu;
	computer* com = new component();
	cout << "Add RAM? (y/n)" << endl;
	cin >> Ram;
	cout << "Add SSD? (y/n)" << endl;
	cin >> Ssd;
	cout << "Add GPU? (y/n)" << endl;
	cin >> Gpu;
	if (Ram == 'y') {
		com = new ram(com);
		com->option();
		com->cost();
	}
	if (Ssd == 'y') {
		com = new ssd(com);
		com->option();
		com->cost();
	}
	if (Gpu == 'y') {
		com = new gpu(com);
		com->option();
		com->cost();
	}
	cout << com->option() + "," << com->cost() << endl;
	
}