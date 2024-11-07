#include <iostream>

class Animal {
public:
	virtual void speak() {
		std::cout << "悼拱家府" << std::endl;	
	}
};
class Cat : public Animal {
public:
	void speak() {
		std::cout << "具克" << std::endl;
	}
};
class Dog : public Animal {
public:
	void speak() {
		std::cout << "港港" << std::endl;
	}
};
int main() {
	Animal animal;
	Cat cat;
	Dog dog;
	animal.speak();
	cat.speak();
	dog.speak();

	Animal** animalList = new Animal *[3];
	animalList[0] = new Animal;
	animalList[1] = new Cat;
	animalList[2] = new Dog;
	for (int i = 0; i < 3; i++) {
		animalList[i]->speak();
	}



}