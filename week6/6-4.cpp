#include <iostream>
#include <string>

class Person {
private:
	const char* name;
	int age;
	const char* address;
public:
	Person(const char* name, int age, const char* address) : name(name), age(age), address(address) {
		//person 생성자
	}
	const char* getName() {//이름 반환
		return name;
	}
	int getAge() { // 나이 반환
		return age;
	}
	const char* getAddress(){ //주소 반환
		return address;
	}
};
class Student : public Person { // person상속
private:
	int ID;
public:
	Student(const char* name, int age,const char* address, int ID) : Person(name, age, address), ID(ID) {
	} //Student 생성자
	int getID() {//ID 반환
		return ID;
	}
	void StudentInformation() {//정보 출력
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