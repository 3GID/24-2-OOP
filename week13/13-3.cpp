#include <iostream>
#include <algorithm>
#include <forward_list>
template <typename ForwardIterator, typename Compare>
void bubble_sort(ForwardIterator first, ForwardIterator last, Compare comp) {
	// bubble sort ���� ����
	for (auto it = first; it != last; ++it) {
		auto next = std::next(it);

		// ���� ����: ������ ���� ��
		for (; next != last; ++next) {
			if (comp(*next, *it)) {
				std::iter_swap(it, next); // ��ȯ
			}		
		}


	}
}
	
class compGreater { // �������� ���Ŀ� ���
public:// functor�� ����(�� ���� �� ����� bool Ÿ������ ����, operator( ) ����)
	bool operator() (int x, int y) {
		return x > y; //x�� ū��� true
	}
};
class compLess { // �������� ���Ŀ� ���
public:// functor�� ����(�� ���� �� ����� bool Ÿ������ ����, operator( ) ����)
	bool operator() (int x, int y) {
		return x < y; //x�� ������� false
	}
	};
int main() {
	std::forward_list<int> values{ 7, 0, 6, 1, 5, 2, 4, 3 };
	std::cout << "�������� ����" << std::endl;
	// bubble sort ����Ͽ� �������� ���� �� ��� ���
	bubble_sort(values.begin(), values.end(), compGreater());
	for (int val : values) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
	std::cout << "�������� ����" << std::endl;
	// bubble sort ����Ͽ� �������� ���� �� ��� ���
	bubble_sort(values.begin(), values.end(), compLess());
	for (int val : values) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
	return 0;
}