#include <iostream>
#include <string>

class Employee {
private:
	const char* emp_id;
	const char* name;
	int age;
	const char* address;
	float salary;

public://Employee ������
	Employee(const char* emp_id, const char* name, int age, const char* address,
		float salary) :emp_id(emp_id), name(name), age(age), address(address), salary(salary) {

	}
	const char* get_emp_id(){//id ��ȯ
		return emp_id;
	}
	const char* get_name(){//�̸� ��ȯ
		return name;
	}
	int get_age() {//���� ��ȯ
		return age;
	}
	const char* get_address() {//�ּ� ��ȯ
		return address;
	}
	float get_salary() {//���� ��ȯ
		return salary;
	}

};
class Manager : public Employee {
private:
	int team_size;
public://Manager ������
	Manager(const char* emp_id, const char* name, int age, const char* address,
		float salary,int team_size):Employee(emp_id,name,age,address,salary),team_size(team_size){
	}
	int get_team_size() {//team size ��ȯ
		return team_size;
	}
	void Manager_Information() {//manager ���� ���
		std::cout << "Manager Information" << std::endl;
		std::cout << "Employee ID : " << get_emp_id() << std::endl;
		std::cout << "Name : " << get_name() << std::endl;
		std::cout << "Age : " << get_age() << std::endl;
		std::cout << "Address : " << get_address() << std::endl;
		std::cout << "Salary : $" << get_salary() << std::endl;
		std::cout << "Team Size : " << get_team_size() << std::endl;


	}

};
int main() {
	Manager manage("EMP001", "KIM", 35, "Seoul", 5000, 10);
	manage.Manager_Information();
}