#include<iostream>

void swap(int& first, int& second)
{
	
	int temp = first;
	first = second;
	second = temp;
}

int main()
{
	int a = 2, b = 3;
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	return 0;
}
//실습 6 : 함수 내부에서 변경된 값이 외부로 전달되지 않으므로 레퍼런스를 사용하여 직접 참조해준다.