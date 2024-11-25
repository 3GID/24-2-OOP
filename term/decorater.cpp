#include <iostream>
#include <string>
using namespace std;
class computer { // �������̽� ����
public:
	virtual ~computer() {
	}
	virtual int cost() = 0;
	virtual string option() = 0;

};
class component : public computer { // �⺻ ��ǻ�� ����
public:
	string option() override {
		return "COMPUTER";
	}
	int cost() override {
		return 500000;
	}
};
class decorator : public computer { //���ڷ����Ͱ� cimputer ��ü�� ������ �� �ֵ��� ��
protected:
	computer* comp;
public:
	decorator(computer* com) : comp(com) {}
};
class ram : public decorator { // ������ ���ڷ����͸� computer ��ü�� �������� �߰�
public:
	ram(computer* com) : decorator(com){}
	string option() override {
		return "RAM" + comp->option() ;
	}
	int cost() override {
		return comp->cost() + 50000;
	}
};
class ssd : public decorator { // ������ ���ڷ����͸� computer ��ü�� �������� �߰�
public:
	ssd(computer* com) : decorator(com) {}
	string option() override {
		return  "SSD" + comp->option();
	}
	int cost() override {
		return comp->cost() + 80000;
	}
};
class gpu : public decorator { // ������ ���ڷ����͸� computer ��ü�� �������� �߰�
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