#include <iostream>
using namespace std;
#include "function.h"

/*1、创建后缀名为.h的头文件
2、创建后缀名为.cpp的源文件
3、在头文件中写函数的声明
4、在源文件中写函数的定义*/

//int main() {
//
//#pragma region 指针的使用
//	//1、定义指针
//	//int a = 10;
//	////指针定义的语法： 数据类型* 指针变量名
//	//int* p;
//	////让指针记录变量a的地址
//	//p = &a;
//
//	//cout << "a的地址 " << &a << endl;
//	//cout << "指针p " << p << endl;
//
//	////2、使用指针
//	////可以通过解引用的方式来找到指针指向的内存
//	////指针前加 * 代表解引用，找到指针指向的内存中的数据
//	//*p = 1000;
//	//cout << "a = " << a << endl;
//	//cout << "*p = " << *p << endl;
//#pragma endregion
//
//#pragma region 空指针
//	//1、空指针用于给指针变量进行初始化
//	//int* p = NULL;
//	//2、空指针是不可以进行访问的
//	//*p = 100;//会报错 0~255之间的内存编号是系统占用的，因此不可以访问
//#pragma endregion
//
//#pragma region 野指针
//	//int* p = NULL;
//	//在程序中，要避免出现野指针
//	//int* p1 = (int*)0x1100;//野指针
//#pragma endregion
//
//#pragma region const修饰指针
//	/*1、const修饰指针-- - 常量指针		指针指向可以修改，指针指向的值不可以改
//	2、const修饰常量-- - 指针常量		指针的指向不可以修改，指针指向的值可以修改
//	3、const即修饰指针，又修饰常量*/
//	//int a = 10;
//	//int b = 10;
//	//const int* p = &a;
//
//	//*p = 20;// 错误，不可修改
//	//p = &b;//  正确，指向可以改
//
//	//int* const p1 = &a;//指针常量   
//	//*p1 = 20;	//正确，值可以修改
//	//p1 = &b;	//错误，指向不可以修改
//
//	//const int* const	p2 = &a;//指针的指向和指针指向的值都不可以改
//#pragma endregion
//
//#pragma region 指针和数组
//	//利用指针访问数组中的元素
//	//int arr[] = { 5,6,5,5,1,32,12,1,5,6,51,54 };
//
//	//cout << "数组的第一个元素" << arr[0] << endl;
//	//int* p = arr;//arr就是数组的 首地址
//
//	//cout << "利用指针获取数组第一个元素" << *p << endl;
//
//	//p++;
//	//cout << "利用指针获取数组第二个元素" << *p << endl;
//#pragma endregion
//
//#pragma region 指针和函数
//	//值传递
//	/*int a = 10;
//	int  b = 10;
//	swap(a, b);*/
//	//地址传递
//#pragma endregion
//
//#pragma region 封装冒泡排序
//	int arr[] = { 5,3,21,8,54,98,7,86,1,2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	cout << "------排序前-----" << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	cout << "------指针排序后-----" << endl; 
//	maopaosort1(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	cout << "------数组排序后-----" << endl;
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