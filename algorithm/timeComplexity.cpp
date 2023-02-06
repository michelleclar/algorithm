#include"timeComplexity.h"

timeComplexity::timeComplexity() {

}

timeComplexity::~timeComplexity() {

}
/* ������ */
int timeComplexity::constant(int n) {
	int count = 0;
	int size = 100000;
	for (int i = 0; i < size; i++)
		count++;

	return count;
}
/* ���Խ� */
int timeComplexity::linear(int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
		count++;
	return count;
}
/* ���Խף��������飩 */
int timeComplexity::arrayTraversal(std::vector<int>& nums) {
	int count = 0;
	// ѭ�����������鳤�ȳ�����
	for (int num : nums) {
		count++;
	}
	return count;
}
/* ƽ���� */
int timeComplexity::quadratic(int n) {
	int count = 0;
	// ѭ�����������鳤�ȳ�ƽ����ϵ
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			count++;
		}
	}
	return count;
}

/* ƽ���ף�ð������ */
int timeComplexity::bubbleSort(std::vector<int>& nums) {
	int count = 0;  // ������
// ��ѭ����������Ԫ������Ϊ n-1, n-2, ..., 1
	for (int i = nums.size() - 1; i > 0; i--) {
		// ��ѭ����ð�ݲ���
		for (int j = 0; j < i; j++) {
			if (nums[j] > nums[j + 1]) {
				// ���� nums[j] �� nums[j + 1]
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
				count += 3;  // Ԫ�ؽ������� 3 ����Ԫ����
			}
		}
	}
	return count;
}

/* ָ���ף�ѭ��ʵ�֣� */
int timeComplexity::exponential(int n) {
	int count = 0, base = 1;
	// cell ÿ��һ��Ϊ�����γ����� 1, 2, 4, 8, ..., 2^(n-1)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < base; j++) {
			count++;
		}
		base *= 2;
	}
	// count = 1 + 2 + 4 + 8 + .. + 2^(n-1) = 2^n - 1
	return count;
}

/* ָ���ף��ݹ�ʵ�֣� */
int timeComplexity::expRecur(int n) {
	if (n == 1) return 1;
	return expRecur(n - 1) + expRecur(n - 1) + 1;
}

/* �����ף�ѭ��ʵ�֣� */
int timeComplexity::logarithmic(float n) {
	int count = 0;
	while (n > 1) {
		n = n / 2;
		count++;
	}
	return count;
}

/* �����ף��ݹ�ʵ�֣� */
int timeComplexity::logRecur(float n) {
	if (n <= 1) return 0;
	return logRecur(n / 2) + 1;
}

/* ���Զ����� */
int timeComplexity::linearLogRecur(float n) {
	if (n <= 1) return 1;
	int count = linearLogRecur(n / 2) +
		linearLogRecur(n / 2);
	for (int i = 0; i < n; i++) {
		count++;
	}
	return count;
}

/* �׳˽ף��ݹ�ʵ�֣� */
int timeComplexity::factorialRecur(int n) {
	if (n == 0) return 1;
	int count = 0;
	// �� 1 �����ѳ� n ��
	for (int i = 0; i < n; i++) {
		count += factorialRecur(n - 1);
	}
	return count;
}