#pragma once
#include<iostream>
#include<vector>

#include <unordered_map>
#include <string>
#include"utils.h"
/*
* 空间复杂度
* 常数阶 < 对数阶 < 线性阶 < 平方阶 < 指数阶
*/
class spatialComplexity
{
public:
	/* 常数阶 */
	void constant(int n);
	/* 线性阶 */
	void linear(int n);
	/* 线性阶（递归实现） */
	void linearRecur(int n);
	/* 平方阶 */
	void quadratic(int n);
	/* 平方阶（递归实现） */
	int quadraticRecur(int n);
	/* 指数阶（建立满二叉树） */
	TreeNode* buildTree(int n);
};

