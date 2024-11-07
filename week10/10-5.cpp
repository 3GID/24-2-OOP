#include <iostream>
#include <cassert>
using namespace std;

class CEO {
public:
	virtual ~CEO() {

	}
};
class CPO {
public:
	virtual ~CPO() {

	}
};
class Manager : public CEO, public CPO{

};
class Staff : public Manager {

};
int main() {
	CPO* cpo = new Staff();
	CEO* ceo = new Staff();
	
	Staff* staff = dynamic_cast<Staff*>(cpo);
	Staff* staff2 = dynamic_cast<Staff*>(ceo);

	Manager* manager = dynamic_cast<Manager*>(ceo);
	assert(staff != nullptr);
	assert(staff2 != nullptr);
	assert(manager != nullptr);

}