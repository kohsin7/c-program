#include "function.h"

void swap(int a, int b) {
	cout << "����ǰ: " << a << " " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "����ǰ: " << a << " " << b << endl;
}

void swap01(int* a, int* b) {
	int temp = *a;

}

//��װһ��ð������ ָ����ʽ
void maopaosort1(int* arr, int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//ð������������ʽ
void maopaosort2(int arr[], int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}