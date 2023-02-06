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

/* 函数 */
int func() {
    // do something...
    return 0;
}

int algorithm(int n) {        // 输入数据
    const int a = 0;          // 暂存数据（常量）
    int b = 0;                // 暂存数据（变量）
    Node* node = new Node(0);  // 暂存数据（对象）
    int c = func();       // 栈帧空间（调用函数）
    return a + b + c;         // 输出数据
}

void algorithm_A(int n) {
    int a = 0;               // O(1)
    std::vector<int> b(10000);    // O(1)
    if (n > 10)
        std::vector<int> nums(n); // O(n)
}

/* 循环 O(1) */
void loop(int n) {
    for (int i = 0; i < n; i++) {
        func();
    }
}
/* 递归 O(n) */
void recur(int n) {
    if (n == 1) return;
    return recur(n - 1);
}