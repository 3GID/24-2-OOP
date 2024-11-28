#include <iostream>
#include <string>
#include <algorithm>

template<typename T>
double min_value(T x) { // �ϳ��� ���ڿ� ���� ó��
	return x;
}
template<typename T, typename... Args>
double min_value(T x, Args... args) { // if������ �� ������ ����
	if (x > min_value(args...)) {
		return min_value(args...);
	}
	else {
		return x;
	}
}
int main() {
	auto x = min_value(42, 3.14, 11.1f, -2);
	std::cout << x;
	getchar();
	return 0;
}