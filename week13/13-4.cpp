#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // ���� ���� �Լ�
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
    Shape* decoratedShape;  // �����ͷ� ����
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
    Shape* circle = new Circle();  // �����ͷ� ����
    Shape* redCircle = new RedShapeDecorator(new Circle());
    Shape* redRectangle = new RedShapeDecorator(new Rectangle());

    cout << "Circle with normal border" << endl;
    circle->draw();  // �����ͷ� ȣ��

    cout << "Circle with red border" << endl;
    redCircle->draw();  // �����ͷ� ȣ��

    cout << "Rectangle with red border" << endl;
    redRectangle->draw();  // �����ͷ� ȣ��
        

}