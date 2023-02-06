#include "spatialComplexity.h"



/* ������ */
void spatialComplexity::constant(int n) {
    // ����������������ռ�� O(1) �ռ�
    const int a = 0;
    int b = 0;
    std::vector<int> nums(10000);
    ListNode node(0);
    // ѭ���еı���ռ�� O(1) �ռ�
    for (int i = 0; i < n; i++) {
        int c = 0;
    }
    // ѭ���еĺ���ռ�� O(1) �ռ�
    for (int i = 0; i < n; i++) {
        func();
    }
};

/* ���Խ� */
void spatialComplexity::linear(int n) {
    // ����Ϊ n ������ռ�� O(n) �ռ�
    std::vector<int> nums(n);
    // ����Ϊ n ���б�ռ�� O(n) �ռ�
    std::vector<ListNode> nodes;
    for (int i = 0; i < n; i++) {
        nodes.push_back(ListNode(i));
    }
    // ����Ϊ n �Ĺ�ϣ��ռ�� O(n) �ռ�
    std::unordered_map<int, std::string> map;
    for (int i = 0; i < n; i++) {
        map[i] = std::to_string(i);
    }
};

/* ���Խף��ݹ�ʵ�֣� */
void linearRecur(int n) {
    std::cout << "�ݹ� n = " << n << std::endl;
    if (n == 1) return;
    linearRecur(n - 1);
};

/* ƽ���� */
void quadratic(int n) {
    // ��ά�б�ռ�� O(n^2) �ռ�
    std::vector<std::vector<int>> numMatrix;
    for (int i = 0; i < n; i++) {
        std::vector<int> tmp;
        for (int j = 0; j < n; j++) {
            tmp.push_back(0);
        }
        numMatrix.push_back(tmp);
    }
};

/* ƽ���ף��ݹ�ʵ�֣� */
int quadraticRecur(int n) {
    if (n <= 0) return 0;
    std::vector<int> nums(n);
    std::cout << "�ݹ� n = " << n << " �е� nums ���� = " << nums.size() << endl;
    return quadraticRecur(n - 1);
};

/* ָ���ף��������������� */
TreeNode* buildTree(int n) {
    if (n == 0) return nullptr;
    TreeNode* root = new TreeNode(0);
    root->left = buildTree(n - 1);
    root->right = buildTree(n - 1);
    return root;
};
