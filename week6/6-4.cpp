#include <iostream>
#include <string>

class Person {
private:
	const char* name;
	int age;
	const char* address;
public:
	Person(const char* name, int age, const char* address) : name(name), age(age), address(address) {
		//person ������
	}
	const char* getName() {//�̸� ��ȯ
		return name;
	}
	int getAge() { // ���� ��ȯ
		return age;
	}
	const char* getAddress(){ //�ּ� ��ȯ
		return address;
	}
};
class Student : public Person { // person���
private:
	int ID;
public:
	Student(const char* name, int age,const char* address, int ID) : Person(name, age, address), ID(ID) {
	} //Student ������
	int getID() {//ID ��ȯ
		return ID;
	}
	void StudentInformation() {//���� ���
		std::cout << "Student Information" << std::endl;
		std::cout << "Name " << getName() << std::endl;
		std::cout << "Age " << getAge() << std::endl;
		std::cout << "Address " << getAddress() << std::endl;
		std::cout << "Student ID " << getID() << std::endl;

	}

};
int main() {
	Student me("Kimdonghyeon", 23, "Daejeon", 202102536);
	me.StudentInformation();

}