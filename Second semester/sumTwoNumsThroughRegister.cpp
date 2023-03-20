#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int sumV1andV2(int* vec1, int* vec2,int size);
int prenos(int* vec1, int* vec2, int size);
int cMod(int* vec1, int* vec2, int size);
void print(int* result ,int size);
void deallocation(int* dynamicArr);

int main()
{
	int size = 0;
	int* vector1 = new int[size];
	int* vector2 = new int[size];

	cout << "Insert the size of container: ";
	cin >> size;

	cout << "Insert nums in vector1"<<'\n';
	//Inserting values in vector1
	for (int i = 0; i < size; i++)
	{
		cin >> vector1[i];
	}

	cout << "Insert nums in vector2"<< '\n';
	//Inserting values in vector2
	for (int i = 0; i < size; i++)
	{
		cin >> vector2[i];
	}
	cout << endl;
	//Printing  vector1
	print(vector1, size);

	//Printing  vector2
	print(vector2, size);

	    //Summing
		sumV1andV2(vector1, vector2, size);
	   

		//Prenos
		prenos(vector1, vector2, size);

		//Mod
		cMod(vector1, vector2, size);



	return 0;
}

int sumV1andV2(int* vec1, int*  vec2,int size)
{
	int sum = 0;
	int prenos = 1;
	bool isTrue = false;
	int* result = new int[size];
	for(int i = size - 1; i >= 0; i--)
	{
		sum = vec1[i]+vec2[i];
		if (isTrue==true)
		{
			result[i] = sum + 1;
			isTrue = false;
			continue;
		}
		if (sum>9)
		{
		result[i] = sum%10;
		isTrue = true;
		continue;
		}
		else
		{

		result[i] += sum;
		}
	}
	cout << endl;
	cout << "SUM: "<<endl;
	print(result, size);
	deallocation(result);
	return 0;
}


int cMod(int* vec1, int* vec2, int size)
{
	int maxValuePosition = 10;
	int sum = 0;
	int* result = new int[size];
	for (int i = size - 1; i >= 0; i--)
	{
		sum = vec1[i] + vec2[i];
		if (sum>10)
		{
		result[i] = sum % maxValuePosition;

		}
		else
		{
			result[i] = 0;
		}
	}
	cout << "C: " << endl;
	print(result, size);
	deallocation(result);
	return 0;
}


int prenos(int* vec1, int* vec2, int size)
{
	int maxValuePosition = 9;
	int sum = 0;
	int* result = new int[size];
	for (int i = size - 1; i >= 0; i--)
	{
		sum = vec1[i] + vec2[i];
		if (sum > maxValuePosition)
		{
			result[i] = sum/maxValuePosition;
		}
		else
		{

		result[i] = 0;
		}

	}

	cout << "Prenos: "<<endl;
	print(result, size);
	deallocation(result);

	return 0;
}




void print(int* result, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << result[i] << "\t";
	}
	cout << '\n';
}

void deallocation(int* dynamicArr)
{
	delete[] dynamicArr;
}
