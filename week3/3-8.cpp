#include <iostream>
/*
refArray �迭�� ������ �޾� �ִ밪�� ���ϰ� �ش� ���� ��ȯ�ϴ� findMax �Լ� �ۼ�
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
	/* array �迭�� ����(���۷���)�ϴ� refArray �迭 ���� */
	int(&refArray)[5] = array;
	std::cout << "The maximum value is: " << findMax(refArray) << std::endl;
	return 0;
}
//�ǽ� 8 : ���ڸ� ���� �����ϵ��� ���۷��� �迭�� �Ű������� ���� �� for ~ if ���� ����
// �迭�� ������ ���Ͽ� �ִ밪�� ����