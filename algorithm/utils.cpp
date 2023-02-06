#include"utils.h"
#include<chrono>
#include <random>

std::vector<int> utils::randomNumbers(int n) {
    std::vector<int> nums(n);
    // �������� nums = { 1, 2, 3, ..., n }
    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }
    // ʹ��ϵͳʱ�������������
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // �����������Ԫ��
    std::shuffle(nums.begin(), nums.end(), std::default_random_engine(seed));
    return nums;
}