//#include <algorithm>
#include <iostream>
using namespace std;

bool ascendingFunc(int a, int b);
bool descendingFunc(int a, int b);
void sortingMethod(int* arr,bool(*comparingFunc)(int x,int y),int size);
void printNumbers(int* arr, int size);

int main()
{
	int arr[5] = { 1,5,4,2,3 };
	int sizeOfArr = 5;
	bool (*sortPtrFunc)(int a, int b) = descendingFunc;
	sortingMethod(arr, sortPtrFunc, sizeOfArr);
	printNumbers(arr, 5);
	return 0;
}


bool ascendingFunc(int a, int b) {
	return a < b;
}
bool descendingFunc(int a, int b) {
	return a > b;
}
void sortingMethod(int* arr, bool(*comparingFunc)(int x, int y),int size)
{
	//sorting method with swap function for exchanging the elements of array by order
	for (int startIdx = 0; startIdx < sizeof(arr); startIdx++)
	{
		int bestIdx = startIdx;
		for (int currentIndx = startIdx+1; currentIndx < size; currentIndx++)
		{
			if (comparingFunc(arr[currentIndx],arr[bestIdx]))
			{
				bestIdx = currentIndx;
			}
		}
			swap(arr[startIdx], arr[bestIdx]);
	}
}

void printNumbers(int* arr, int size)	{
		for (size_t i = 0; i < size; i++)
		{
			cout << "Arr[" << i << "]" << arr[i] << " \n";
		}
	
}
