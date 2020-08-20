#include <iostream>
using namespace std;
#include<ctime>

//常量的定义方式
//1、#define 宏常量
//2、const修饰的变量

//sizeof关键字: 内存空间

#define Day = 7;
int main() {
#pragma region Sizeof关键字
	/*const int mouth = 24;
	cout << "int 大小 " << sizeof(int) << endl;*/
#pragma endregion

#pragma region 多行if语句---if else if 
	/*int score = 0;
	cout << "input" << endl;
	cin >> score;

	if (score > 600)
	{
		cout << "succeed" << endl;
	}
	else
	{
		cout << "failed" << endl;
	}*/
#pragma endregion

#pragma region 猜字游戏
	//添加随机数种子 作用利用当前系统时间生成随机数，防止每次随机数都一样
	//srand(unsigned int(time(NULL)));
	//int num = rand() % 100 + 1;//生成一个0 + 1 ~ 99 + 1随机数
	//cout << num << endl;
#pragma endregion

#pragma region 乘法口诀表
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j << ends;
		}
		cout << endl;
	}*/
#pragma endregion

#pragma region 冒泡排序
	//int arr[] = { 5,3,21,8,54,98,7,86,1,2 };
	//int arrayLength = sizeof(arr) / sizeof(arr[0]);
	//cout << "-----排序前-----" << endl;
	//for (int i = 0; i < arrayLength; i++)
	//{
	//	cout << arr[i] << " ";
	//}

	////总排序轮数为元素个数 - 1
	//for (int i = 0; i < arrayLength - 1; i++)
	//{
	//	//内层循环对比 次数 = 元素个数 - 当前轮数 -1
	//	for (int j = 0; j < arrayLength - i - 1; j++)
	//	{
	//		int temp = arr[j];
	//		if (arr[j] > arr[j + 1])
	//		{
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}

	//cout << endl;
	//cout << "-----排序后-----" << endl;
	//for (int i = 0; i < arrayLength; i++)
	//{
	//	cout << arr[i] << " ";
	//}

	//cout << endl;
#pragma endregion


	system("pause");
	return 0;
}