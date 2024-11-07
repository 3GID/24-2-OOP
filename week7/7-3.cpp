#include <iostream>

class GlobalClass {
private:
    int m_value;
    static GlobalClass* s_instance;

    // 생성자를 private로 해서 외부에서 인스턴스를 생성할 수 없도록 함
    GlobalClass(int v = 0) {
        m_value = v;
    }

public:
    // static 메서드를 통해 단일 객체를 반환
    static GlobalClass* instance() {
        if (s_instance == nullptr) {
            s_instance = new GlobalClass();
        }
        return s_instance;
    }

    int get_value() {
        return m_value;
    }

    void set_value(int v) {
        m_value = v;
    }
};

// 정적 멤버 변수 초기화
GlobalClass* GlobalClass::s_instance = nullptr;

void foo() {
    GlobalClass::instance()->set_value(1);
    std::cout << "foo: global_ptr is " << GlobalClass::instance()->get_value() << '\n';
}

void bar() {
    GlobalClass::instance()->set_value(2);
    std::cout << "bar: global_ptr is " << GlobalClass::instance()->get_value() << '\n';
}

int main() {
    std::cout << "main: global_ptr is " << GlobalClass::instance()->get_value() << '\n';
    foo();
    bar();
}