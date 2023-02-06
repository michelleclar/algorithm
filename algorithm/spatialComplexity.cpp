#include "spatialComplexity.h"



/* 常数阶 */
void spatialComplexity::constant(int n) {
    // 常量、变量、对象占用 O(1) 空间
    const int a = 0;
    int b = 0;
    std::vector<int> nums(10000);
    ListNode node(0);
    // 循环中的变量占用 O(1) 空间
    for (int i = 0; i < n; i++) {
        int c = 0;
    }
    // 循环中的函数占用 O(1) 空间
    for (int i = 0; i < n; i++) {
        func();
    }
};

/* 线性阶 */
void spatialComplexity::linear(int n) {
    // 长度为 n 的数组占用 O(n) 空间
    std::vector<int> nums(n);
    // 长度为 n 的列表占用 O(n) 空间
    std::vector<ListNode> nodes;
    for (int i = 0; i < n; i++) {
        nodes.push_back(ListNode(i));
    }
    // 长度为 n 的哈希表占用 O(n) 空间
    std::unordered_map<int, std::string> map;
    for (int i = 0; i < n; i++) {
        map[i] = std::to_string(i);
    }
};

/* 线性阶（递归实现） */
void linearRecur(int n) {
    std::cout << "递归 n = " << n << std::endl;
    if (n == 1) return;
    linearRecur(n - 1);
};

/* 平方阶 */
void quadratic(int n) {
    // 二维列表占用 O(n^2) 空间
    std::vector<std::vector<int>> numMatrix;
    for (int i = 0; i < n; i++) {
        std::vector<int> tmp;
        for (int j = 0; j < n; j++) {
            tmp.push_back(0);
        }
        numMatrix.push_back(tmp);
    }
};

/* 平方阶（递归实现） */
int quadraticRecur(int n) {
    if (n <= 0) return 0;
    std::vector<int> nums(n);
    std::cout << "递归 n = " << n << " 中的 nums 长度 = " << nums.size() << endl;
    return quadraticRecur(n - 1);
};

/* 指数阶（建立满二叉树） */
TreeNode* buildTree(int n) {
    if (n == 0) return nullptr;
    TreeNode* root = new TreeNode(0);
    root->left = buildTree(n - 1);
    root->right = buildTree(n - 1);
    return root;
};
