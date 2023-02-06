#pragma once
#include<vector>
class utils {
public:
	static std::vector<int> randomNumbers(int n);
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    /*

        ListNode(int x) {
            val = x;
            next = nullptr;
        }

    */
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr) , right(nullptr) {}
    /*

        TreeNode(int x) {
            val = x;
            left = nullptr;
            right = nullptr;
        }

    */
};

/* ���� */
int func() {
    // do something...
    return 0;
}

int algorithm(int n) {        // ��������
    const int a = 0;          // �ݴ����ݣ�������
    int b = 0;                // �ݴ����ݣ�������
    Node* node = new Node(0);  // �ݴ����ݣ�����
    int c = func();       // ջ֡�ռ䣨���ú�����
    return a + b + c;         // �������
}

void algorithm_A(int n) {
    int a = 0;               // O(1)
    std::vector<int> b(10000);    // O(1)
    if (n > 10)
        std::vector<int> nums(n); // O(n)
}

/* ѭ�� O(1) */
void loop(int n) {
    for (int i = 0; i < n; i++) {
        func();
    }
}
/* �ݹ� O(n) */
void recur(int n) {
    if (n == 1) return;
    return recur(n - 1);
}