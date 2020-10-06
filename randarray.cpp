#include <iostream>
#include <cstdlib>
using namespace std;

void RandArray(int arr[], const int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	
}
