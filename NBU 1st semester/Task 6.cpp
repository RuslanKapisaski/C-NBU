#include <iostream>
#include<string>
using namespace std;


void ToCharArrSubstr(string input, string substring, string newSubstring)
{
	char inputArr[30], substringArr[30], newSubstringArr[30];
	//inputing arrays
	for (int i = 0; i <= input.length(); i++)
	{
		inputArr[i] = input[i];
	}
	for (int x = 0; x <= substring.length(); x++)
	{
		substringArr[x] = substring[x];
	}
	for (int y = 0; y <= newSubstring.length(); y++)
	{
		newSubstringArr[y] = newSubstring[y];
	}

	//logic

	char* ptr;
	ptr = strstr(inputArr, substringArr);
	if (ptr != NULL)
	{
		int i = 0;
		//data input
		for (int n = 0; n < input.length(); n++)
		{
			if (inputArr[n] == substringArr[i])
			{
				inputArr[n] = newSubstringArr[i];
				i++;
			}
			else
			{
				continue;
			}
		}
	}
	
	else if(ptr == NULL)
	{
		cout << "This substring is not in the main string!";
		abort();
	}

	//output
	for (int i = 0; i < input.length(); i++)
	{
		cout << inputArr[i] ;
	
	}
}
int main()
{
	string input = " ";
	string subStr = " ";
	string newSubStr = " ";


	cout << "Write a string: ";
	getline(cin, input);


	cout << "Write a substring you want to replace: ";
	getline(cin, subStr);


	cout << "Write the new substring: ";
	getline(cin, newSubStr);

	ToCharArrSubstr(input, subStr, newSubStr);





	return 0;
}