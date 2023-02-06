#pragma once
#include<iostream>
#include<vector>

#include <unordered_map>
#include <string>
#include"utils.h"
/*
* �ռ临�Ӷ�
* ������ < ������ < ���Խ� < ƽ���� < ָ����
*/
class spatialComplexity
{
public:
	/* ������ */
	void constant(int n);
	/* ���Խ� */
	void linear(int n);
	/* ���Խף��ݹ�ʵ�֣� */
	void linearRecur(int n);
	/* ƽ���� */
	void quadratic(int n);
	/* ƽ���ף��ݹ�ʵ�֣� */
	int quadraticRecur(int n);
	/* ָ���ף��������������� */
	TreeNode* buildTree(int n);
};

