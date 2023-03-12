#include <iostream>
#include <string>


using namespace std;

int main()
{
	int inputNum;
	int currNum;
	int revNum;
	cin >> inputNum;
	
	while (currNum>0)
	{
		currNum = inputNum % 10;
		inputNum /= 10;
		revNum = (currNum * 10) + inputNum;
	}
}