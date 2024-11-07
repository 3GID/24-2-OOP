#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base(){

	}
};
class Derived : public Base {

};
int main() {
	Base b;
	Derived d;
	Base* base = new Derived();
	Derived* derived = dynamic_cast<Derived*>(base);
	if (derived) {
		cout << "Everyting is OKAY" << endl;
	}
	else {
	}
}