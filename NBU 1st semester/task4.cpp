#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	cout << "Count of chars" << endl;
	cin >> count;
	char* array = new char(count);
	char charr;
	for (int i = 0; i < count; i++)
	{
		cin >> charr;
		array[i] = charr;
	
	}

	int counter = 1;
	int average = 0;
	int quantityForChar = 0;
	for (int i = 0; i < count; i++)
	{
		quantityForChar = (int)array[i];
		average += quantityForChar;
		average /= counter;
		counter++;
	}

	delete[] array;
	array = NULL;
	
	cout << average << endl;
	return 0;
}