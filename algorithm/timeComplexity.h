#pragma once
#include<vector>
//时间复杂度
/*
常数阶 对数阶 线性阶
线性对数阶 平方阶 指数阶
阶乘阶
时间复杂度从低到高
*/
class timeComplexity {
public:
	/*构造函数*/
	timeComplexity();
	/*析构函数*/
	~timeComplexity();
	/*常数阶*/
	int constant(int n);
	/*线性阶*/
	int linear(int n);
	/*线性阶-数组遍历*/
	int arrayTraversal(std::vector<int>& nums);
	/*平方阶*/
	int quadratic(int n);
	/*平方阶-冒泡排序*/
	int bubbleSort(std::vector<int>& nums);
	/*指数阶-循环*/
	int exponential(int n);
	/* 指数阶-递归*/
	int expRecur(int n);
	/*对数阶-循环*/
	int logarithmic(float n);
	/*对数阶-递归*/
	int logRecur(float n);
	/* 线性对数阶 */
	int linearLogRecur(float n);
	/* 阶乘阶-递归*/
	int factorialRecur(int n);
};