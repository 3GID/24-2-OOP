#include <iostream>
#include <algorithm>
#include <forward_list>
template <typename ForwardIterator, typename Compare>
void bubble_sort(ForwardIterator first, ForwardIterator last, Compare comp) {
	// bubble sort 로직 구현
	for (auto it = first; it != last; ++it) {
		auto next = std::next(it);

		// 내부 루프: 인접한 원소 비교
		for (; next != last; ++next) {
			if (comp(*next, *it)) {
				std::iter_swap(it, next); // 교환
			}		
		}


	}
}
	
class compGreater { // 오름차순 정렬에 사용
public:// functor로 구현(두 정수 비교 결과를 bool 타입으로 리턴, operator( ) 구현)
	bool operator() (int x, int y) {
		return x > y; //x가 큰경우 true
	}
};
class compLess { // 내림차순 정렬에 사용
public:// functor로 구현(두 정수 비교 결과를 bool 타입으로 리턴, operator( ) 구현)
	bool operator() (int x, int y) {
		return x < y; //x가 작은경우 false
	}
	};
int main() {
	std::forward_list<int> values{ 7, 0, 6, 1, 5, 2, 4, 3 };
	std::cout << "오름차순 정렬" << std::endl;
	// bubble sort 사용하여 오름차순 정렬 후 결과 출력
	bubble_sort(values.begin(), values.end(), compGreater());
	for (int val : values) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
	std::cout << "내림차순 정렬" << std::endl;
	// bubble sort 사용하여 내림차순 정렬 후 결과 출력
	bubble_sort(values.begin(), values.end(), compLess());
	for (int val : values) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
	return 0;
}