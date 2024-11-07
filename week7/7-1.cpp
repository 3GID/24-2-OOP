#include <iostream>
using namespace std;

// Strategy �������̽�
class Strategy {
public:
    virtual int doOperation(int num1, int num2) = 0; // ���� ���� �Լ�
};

// OperationAdd Ŭ����
class OperationAdd : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 + num2;
    }
};

// OperationSubstract Ŭ����
class OperationSubstract : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 - num2;
    }
};

// OperationMultiply Ŭ����
class OperationMultiply : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 * num2;
    }
};

// Context Ŭ����
class Context {
private:
    Strategy* strategy;
public:
    Context(Strategy* strategy) {
        this->strategy = strategy;
    }
    int executeStrategy(int num1, int num2) {
        return strategy->doOperation(num1, num2);
    }
};

// main �Լ� - ���� ���� ����
int main() {
    Context* context = new Context(new OperationAdd());
    cout << "10 + 5 = " << context->executeStrategy(10, 5) << endl;

    context = new Context(new OperationSubstract());
    cout << "10 - 5 = " << context->executeStrategy(10, 5) << endl;

    context = new Context(new OperationMultiply());
    cout << "10 * 5 = " << context->executeStrategy(10, 5) << endl;

    delete context; // �޸� ����
    return 0;
}