#include <iostream>
/*
refArray 배열을 참조로 받아 최대값을 구하고 해당 값을 반환하는 findMax 함수 작성
*/
int findMax(int (&refArray)[5]) {
	int max = refArray[0];
	for (int i = 0; i < 5; i++) {
		if (refArray[i] < refArray[i+1]) {
			max = refArray[i + 1];

		}

	}
	return max;


}
int main() {
	int array[5] = { 1, 3, 5, 7, 9 };
	/* array 배열을 참조(레퍼런스)하는 refArray 배열 정의 */
	int(&refArray)[5] = array;
	std::cout << "The maximum value is: " << findMax(refArray) << std::endl;
	return 0;
}
//실습 8 : 인자를 직접 참조하도록 레퍼런스 배열을 매개변수로 넣은 후 for ~ if 문을 통해
// 배열의 값들을 비교하여 최대값을 구함