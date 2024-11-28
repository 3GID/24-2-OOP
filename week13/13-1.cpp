#include <iostream>
template <typename T>
T sum(T num) {
    return num;
} // 기본 sum 함수, 하나의 숫자에 대해서만 처리

template <typename T, typename... Args>
T sum(T num, Args... args) {
    return num + sum(args...);
} // 가변 인자에 대한 sum 함수

template <typename... Args>
double average(Args... args) {
    return static_cast<double>(sum(args...)) / sizeof...(args);  // sum으로 합을 구하고, 그 인자 개수로 나누어 평균 계산
}

int main() {
    std::cout << average(1, 2, 3, 4, 10, 10) << std::endl;
    return 0;
}