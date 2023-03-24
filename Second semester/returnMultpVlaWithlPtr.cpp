#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void minAndMaxFunc(int arr[],int size,int*max,int*min)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>*max)
		{
			*max = arr[i];
		}
		if (arr[i]<*min)
		{
			*min = arr[i];

		}
	}
}

int main()
{
	int numbers[8] = { 1,5,6,9,3,4,8,91 };
	int max = numbers[0];
	int min = numbers[1];
	minAndMaxFunc(numbers,8,&max,&min);
	cout << "max number is: " << max<<endl;
	cout << "min number is: " << min<<endl;

	system("pause > 0");
	return 0;
}