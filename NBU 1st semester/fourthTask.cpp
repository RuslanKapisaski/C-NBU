#include <iostream>
using namespace std;

int main()
{
	int num, currentDigit;
	cin >> num;

	while (num>0)
	{
		currentDigit = num % 10;
		cout << currentDigit<< endl;
		num /= 10;
	}
	return 0;
}