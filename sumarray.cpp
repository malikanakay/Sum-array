#include <iostream>
using namespace std;

void SumArray(int arr[], const int size)
{

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "\n Сумма чисел массива: " << sum;
}
