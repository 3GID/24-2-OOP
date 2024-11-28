#include <iostream>
template <typename T>
T sum(T num) {
    return num;
} // �⺻ sum �Լ�, �ϳ��� ���ڿ� ���ؼ��� ó��

template <typename T, typename... Args>
T sum(T num, Args... args) {
    return num + sum(args...);
} // ���� ���ڿ� ���� sum �Լ�

template <typename... Args>
double average(Args... args) {
    return static_cast<double>(sum(args...)) / sizeof...(args);  // sum���� ���� ���ϰ�, �� ���� ������ ������ ��� ���
}

int main() {
    std::cout << average(1, 2, 3, 4, 10, 10) << std::endl;
    return 0;
}