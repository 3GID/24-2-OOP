#include <iostream>
using namespace std;

// Strategy 인터페이스
class Strategy {
public:
    virtual int doOperation(int num1, int num2) = 0; // 순수 가상 함수
};

// OperationAdd 클래스
class OperationAdd : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 + num2;
    }
};

// OperationSubstract 클래스
class OperationSubstract : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 - num2;
    }
};

// OperationMultiply 클래스
class OperationMultiply : public Strategy {
public:
    int doOperation(int num1, int num2) override {
        return num1 * num2;
    }
};

// Context 클래스
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

// main 함수 - 전략 패턴 데모
int main() {
    Context* context = new Context(new OperationAdd());
    cout << "10 + 5 = " << context->executeStrategy(10, 5) << endl;

    context = new Context(new OperationSubstract());
    cout << "10 - 5 = " << context->executeStrategy(10, 5) << endl;

    context = new Context(new OperationMultiply());
    cout << "10 * 5 = " << context->executeStrategy(10, 5) << endl;

    delete context; // 메모리 해제
    return 0;
}