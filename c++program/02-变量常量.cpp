#include <iostream>
using namespace std;
#include<ctime>

//�����Ķ��巽ʽ
//1��#define �곣��
//2��const���εı���

//sizeof�ؼ���: �ڴ�ռ�

#define Day = 7;
int main() {
#pragma region Sizeof�ؼ���
	/*const int mouth = 24;
	cout << "int ��С " << sizeof(int) << endl;*/
#pragma endregion

#pragma region ����if���---if else if 
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

#pragma region ������Ϸ
	//������������ �������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	//srand(unsigned int(time(NULL)));
	//int num = rand() % 100 + 1;//����һ��0 + 1 ~ 99 + 1�����
	//cout << num << endl;
#pragma endregion

#pragma region �˷��ھ���
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j << ends;
		}
		cout << endl;
	}*/
#pragma endregion

#pragma region ð������
	//int arr[] = { 5,3,21,8,54,98,7,86,1,2 };
	//int arrayLength = sizeof(arr) / sizeof(arr[0]);
	//cout << "-----����ǰ-----" << endl;
	//for (int i = 0; i < arrayLength; i++)
	//{
	//	cout << arr[i] << " ";
	//}

	////����������ΪԪ�ظ��� - 1
	//for (int i = 0; i < arrayLength - 1; i++)
	//{
	//	//�ڲ�ѭ���Ա� ���� = Ԫ�ظ��� - ��ǰ���� -1
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
	//cout << "-----�����-----" << endl;
	//for (int i = 0; i < arrayLength; i++)
	//{
	//	cout << arr[i] << " ";
	//}

	//cout << endl;
#pragma endregion


	system("pause");
	return 0;
}