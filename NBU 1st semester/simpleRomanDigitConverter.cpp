
#include <iostream>
#include <string>

using namespace std;



int main()
{
	int number = 0;
	string input;




	cout << "Enter roman digit in order to be transformed in a decimal: ";
	cin >> input;

	input = '0' + input;




	for (int i = input.length() - 1; i > 0; i--) {

		if (input.at(i) == 'I')
		{
			number += 1;
		}

		else if (input.at(i) == 'V')
		{
			if (input.at(i - 1) == 'I') 
			{
				number += 4;
				i--;
			}

			else 
			{
				number += 5;
			}
		}

		else if (input.at(i) == 'X')
		{
			if (input.at(i - 1) == 'I')
			{
				number += 9;
				i--;
			}
			else
			{
				number += 10;
			}
		}
		else if (input.at(i) == 'L')
		{
			if (input.at(i - 1) == 'X')
			{
				number += 40;
				i--;
			}
			else
			{
				number += 50;
			}
		}
		else if (input.at(i) == 'C')
		{
			if (input.at(i - 1) == 'X')
			{
				number += 90;
				i--;
			}
			else
			{
				number += 100;
			}
		}
		else if (input.at(i) == 'D')
		{
			if (input.at(i - 1) == 'C')
			{
				number += 400;
				i--;
			}
			else
			{
				number += 500;
			}
		}
		else if (input.at(i) == 'M')
		{
			if (input.at(i - 1) == 'C')
			{
				number += 900;
				i--;
			}
			else
			{
				number += 1000;
			}
		}

		else
		{
			cout << "You have inserted wrong roman digit!" << endl;
		}

	}


	cout << "Result in a decimal is: " << number << endl;
	return 0;






}

