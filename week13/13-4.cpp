#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // 순수 가상 함수
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Shape: Rectangle" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Shape: Circle" << endl;
    }
};

class ShapeDecorator : public Shape {
protected:
    Shape* decoratedShape;  // 포인터로 변경
public:
    ShapeDecorator(Shape* decoratedShape) {
        this->decoratedShape = decoratedShape;
    }
    void draw() override {
        decoratedShape->draw();
    }
};

class RedShapeDecorator : public ShapeDecorator {
public:
    RedShapeDecorator(Shape* decoratedShape) : ShapeDecorator(decoratedShape) {}

    void draw() override {
        decoratedShape->draw();
        setRedBorder();
    }

private:
    void setRedBorder() {
        cout << "Border Color: Red" << endl;
    }
};

int main() {
    Shape* circle = new Circle();  // 포인터로 변경
    Shape* redCircle = new RedShapeDecorator(new Circle());
    Shape* redRectangle = new RedShapeDecorator(new Rectangle());

    cout << "Circle with normal border" << endl;
    circle->draw();  // 포인터로 호출

    cout << "Circle with red border" << endl;
    redCircle->draw();  // 포인터로 호출

    cout << "Rectangle with red border" << endl;
    redRectangle->draw();  // 포인터로 호출
        

}