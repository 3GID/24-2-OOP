#include <iostream>

#define MASTACKSIZE 1000

class Stack {
    int top;
public:
    int a[MASTACKSIZE];
    Stack() { top = -1; }
    bool push(int x);
    int pop();
};

bool Stack::push(int x)
{
    if (top >= MASTACKSIZE - 1) {
        std::cout << "오류: 스택이 넘쳤습니다." << std::endl;
        return false;
    }
    else {
        a[++top] = x;
        std::cout << x << "이 스택에 들어갔습니다." << std::endl;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        std::cout << "오류: 스택이 비었습니다." << std::endl;
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}

int main()
{
    class Stack s;
    s.push(7);
    s.push(88);
    s.push(999);

    std::cout << s.pop() << "을 스택에서 꺼냈습니다." << std::endl;
    std::cout << s.pop() << "을 스택에서 꺼냈습니다." << std::endl;
    std::cout << s.pop() << "을 스택에서 꺼냈습니다." << std::endl;

    system("pause");

    return 0;
}