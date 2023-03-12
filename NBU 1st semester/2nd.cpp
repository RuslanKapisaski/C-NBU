#include <iostream>
using namespace std;


int main()
{
	int inputNum;
	const int num = inputNum;
	int sum = 0;
	int currentDigit;
	cin >> inputNum;

	while (inputNum > 0)
	{
		currentDigit = inputNum % 10;
		sum += currentDigit;
		inputNum /= 10;
	}


	cout << "The sum of the digits in your number is equal to:" << sum << endl;
	return 0;
}