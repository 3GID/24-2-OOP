#include <iostream>

class GlobalClass {
private:
    int m_value;
    static GlobalClass* s_instance;

    // �����ڸ� private�� �ؼ� �ܺο��� �ν��Ͻ��� ������ �� ������ ��
    GlobalClass(int v = 0) {
        m_value = v;
    }

public:
    // static �޼��带 ���� ���� ��ü�� ��ȯ
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

// ���� ��� ���� �ʱ�ȭ
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