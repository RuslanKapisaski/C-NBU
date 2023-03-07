#include <iostream>
using namespace std;

int main()
{
	int inputNum;
	int currNumber = 0;


	cin >> inputNum;

	while (inputNum > 0)
	{
		currNumber = inputNum % 10;
		cout << currNumber;
		inputNum /= 10;
	}




	return 0;

}