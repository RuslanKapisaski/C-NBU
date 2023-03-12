#include <iostream>
using namespace std;

int main()

{
	int num;
	cout << "Please insert number 1-12" <<endl;
	cin >> num;

	if (num>2 && num <=5)
	{
		cout << "The season is spring!";
	}
	else if (num >5 && num <=9)
	{
		cout << "The season is summer!";
	}
	else if (num >9 && num <= 11)
	{
		cout << "The season is autumn!";
	}
	else if(num ==12 || num <=2)
	{
		cout << "The season is winter!";
	}
	else
	{
		cout << "Please insert valid data!";
	}



	return 0;
}
