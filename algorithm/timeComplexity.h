#pragma once
#include<vector>
//ʱ�临�Ӷ�
/*
������ ������ ���Խ�
���Զ����� ƽ���� ָ����
�׳˽�
ʱ�临�Ӷȴӵ͵���
*/
class timeComplexity {
public:
	/*���캯��*/
	timeComplexity();
	/*��������*/
	~timeComplexity();
	/*������*/
	int constant(int n);
	/*���Խ�*/
	int linear(int n);
	/*���Խ�-�������*/
	int arrayTraversal(std::vector<int>& nums);
	/*ƽ����*/
	int quadratic(int n);
	/*ƽ����-ð������*/
	int bubbleSort(std::vector<int>& nums);
	/*ָ����-ѭ��*/
	int exponential(int n);
	/* ָ����-�ݹ�*/
	int expRecur(int n);
	/*������-ѭ��*/
	int logarithmic(float n);
	/*������-�ݹ�*/
	int logRecur(float n);
	/* ���Զ����� */
	int linearLogRecur(float n);
	/* �׳˽�-�ݹ�*/
	int factorialRecur(int n);
};