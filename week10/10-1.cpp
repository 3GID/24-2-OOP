#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw()=0;
};
class RoundedRectangle : public Shape {
public:
	void draw() {
		cout << "Inside RoundedRectangle::draw() method." << endl;
	}
};
class RoundedSquare : public Shape {
public:
	void draw() {
		cout << "Inside RoundedSquare::draw() method." << endl;
	}
};
class Rectangle : public Shape {
public:
	void draw() {
		cout << "Inside Rectangle::draw() method." << endl;
	}
};
class Square : public Shape {
public:
	void draw() {
		cout << "Inside Square::draw() method." << endl;
	}
};
class AbstractFactory {
public:
	virtual Shape* getShape(const string& shapeType)=0;
};
class ShapeFactory : public AbstractFactory {
public:
	Shape* getShape(const string& shapeType) {
		if (shapeType == "RECTANGLE") {
			return new Rectangle();}
		else if (shapeType == "SQUARE") {
			return new Square();}
		}
};
class RoundedShapeFactory : public AbstractFactory {
public:
	Shape* getShape(const string& shapeType) {
		if (shapeType == "RECTANGLE") {
			return new RoundedRectangle();
		}
		else if (shapeType == "SQUARE") {
			return new RoundedSquare();
		}
	}
};
class FactoryProducer {
public:
	static AbstractFactory* getFactory(bool rounded) {
		if (rounded) {
			return new RoundedShapeFactory();
		}
		else {
			return new ShapeFactory();
		}
	}
};
int main() {
	FactoryProducer factoryproducer;
	AbstractFactory* shapeFactory = factoryproducer.getFactory(false);
		// ShapeFactory로 upcasting 해준다
	Shape* shape1 = shapeFactory->getShape("RECTANGLE");
	shape1->draw();

		// Square 객체 얻기
	Shape* shape2 = shapeFactory->getShape("SQUARE");
	shape2->draw();

		// 두 번째 ShapeFactory 가져오기
	AbstractFactory* shapeFactory1 = factoryproducer.getFactory(true);

		// Rectangle 객체 얻기
	Shape* shape3 = shapeFactory1->getShape("RECTANGLE");
	shape3->draw();

		// Square 객체 얻기
	Shape* shape4 = shapeFactory1->getShape("SQUARE");
	shape4->draw();
		




	}


