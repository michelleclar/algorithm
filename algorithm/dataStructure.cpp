/* 结构体 */
struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
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