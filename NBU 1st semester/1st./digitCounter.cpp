#include <iostream>

using namespace std;

int main()
{
	int inputNum;
	int counter = 0;
	int currentDigit;
	cin >> inputNum;

	while (inputNum>0)
	{
		currentDigit = inputNum % 10;
		counter++;
		inputNum /= 10;
	}
	
	
	cout << "Your number consists: " << counter << " digits" << endl;
	return 0;
}
