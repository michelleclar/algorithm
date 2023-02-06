#include"utils.h"
#include<chrono>
#include <random>

std::vector<int> utils::randomNumbers(int n) {
    std::vector<int> nums(n);
    // 生成数组 nums = { 1, 2, 3, ..., n }
    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }
    // 使用系统时间生成随机种子
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // 随机打乱数组元素
    std::shuffle(nums.begin(), nums.end(), std::default_random_engine(seed));
    return nums;
}