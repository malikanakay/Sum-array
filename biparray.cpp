void SumArray(int arr[],const int size);
void RandArray(int arr[],const int size);
int main()
{
	
	const int SIZE = 10;
	int arr[SIZE];
	RandArray(arr,SIZE);
	SumArray(arr, SIZE);
	return 0;
}