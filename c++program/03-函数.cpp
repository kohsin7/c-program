#include <iostream>
using namespace std;
#include "function.h"

/*1��������׺��Ϊ.h��ͷ�ļ�
2��������׺��Ϊ.cpp��Դ�ļ�
3����ͷ�ļ���д����������
4����Դ�ļ���д�����Ķ���*/

//int main() {
//
//#pragma region ָ���ʹ��
//	//1������ָ��
//	//int a = 10;
//	////ָ�붨����﷨�� ��������* ָ�������
//	//int* p;
//	////��ָ���¼����a�ĵ�ַ
//	//p = &a;
//
//	//cout << "a�ĵ�ַ " << &a << endl;
//	//cout << "ָ��p " << p << endl;
//
//	////2��ʹ��ָ��
//	////����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
//	////ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
//	//*p = 1000;
//	//cout << "a = " << a << endl;
//	//cout << "*p = " << *p << endl;
//#pragma endregion
//
//#pragma region ��ָ��
//	//1����ָ�����ڸ�ָ��������г�ʼ��
//	//int* p = NULL;
//	//2����ָ���ǲ����Խ��з��ʵ�
//	//*p = 100;//�ᱨ�� 0~255֮����ڴ�����ϵͳռ�õģ���˲����Է���
//#pragma endregion
//
//#pragma region Ұָ��
//	//int* p = NULL;
//	//�ڳ����У�Ҫ�������Ұָ��
//	//int* p1 = (int*)0x1100;//Ұָ��
//#pragma endregion
//
//#pragma region const����ָ��
//	/*1��const����ָ��-- - ����ָ��		ָ��ָ������޸ģ�ָ��ָ���ֵ�����Ը�
//	2��const���γ���-- - ָ�볣��		ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�
//	3��const������ָ�룬�����γ���*/
//	//int a = 10;
//	//int b = 10;
//	//const int* p = &a;
//
//	//*p = 20;// ���󣬲����޸�
//	//p = &b;//  ��ȷ��ָ����Ը�
//
//	//int* const p1 = &a;//ָ�볣��   
//	//*p1 = 20;	//��ȷ��ֵ�����޸�
//	//p1 = &b;	//����ָ�򲻿����޸�
//
//	//const int* const	p2 = &a;//ָ���ָ���ָ��ָ���ֵ�������Ը�
//#pragma endregion
//
//#pragma region ָ�������
//	//����ָ����������е�Ԫ��
//	//int arr[] = { 5,6,5,5,1,32,12,1,5,6,51,54 };
//
//	//cout << "����ĵ�һ��Ԫ��" << arr[0] << endl;
//	//int* p = arr;//arr��������� �׵�ַ
//
//	//cout << "����ָ���ȡ�����һ��Ԫ��" << *p << endl;
//
//	//p++;
//	//cout << "����ָ���ȡ����ڶ���Ԫ��" << *p << endl;
//#pragma endregion
//
//#pragma region ָ��ͺ���
//	//ֵ����
//	/*int a = 10;
//	int  b = 10;
//	swap(a, b);*/
//	//��ַ����
//#pragma endregion
//
//#pragma region ��װð������
//	int arr[] = { 5,3,21,8,54,98,7,86,1,2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	cout << "------����ǰ-----" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	cout << "------ָ�������-----" << endl; 
//	maopaosort1(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	cout << "------���������-----" << endl;
//	maopaosort2(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//#pragma endregion
//
//	//swap(22, 99);
//	system("pause");
//	return 0;
//}