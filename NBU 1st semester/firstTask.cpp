#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "bulgarian");
	cout << "Преобразуване на числата от десетична в римска бройна система. " << endl;

	int number = 0;

	
	for (size_t i = 1; i < 1002; i++)
	{
		number=i;

	a: 
		if (number == 0)
		{
			continue;
		}
		if (number >= 1 && number <= 10)  //start
		{
			switch (number)
			{
			case 1: cout << "I" << endl;
				break;
			case 2: cout << "II" << endl;
				break;
			case 3: cout << "III" << endl;
				break;
			case 4: cout << "IV" << endl;
				break;
			case 5: cout << "V" << endl;
				break;
			case 6: cout << "VI" << endl;
				break;
			case 7: cout << "VII" << endl;
				break;
			case 8: cout << "VIII" << endl;
				break;
			case 9: cout << "IX" << endl;
				break;
			case 10: cout << "X" << endl;
				break;
			}
		}



		else if (number > 10 && number < 50)
		{
			b:
			switch (number > 10)
			{
			case 1: cout << "X";
				number -= 10;
				goto a;
				break;
			
			}
	

		}

		else if (number > 49 && number < 100)
		{ 
			if (number==50)
			{
			 cout << "L"<<endl;
			}
			switch (number > 50)
			{
			case 1: cout << "L";
				number -= 50;

				goto a;
				break;

			}
		}
		else if (number > 99 && number < 500 )
		{
			if (number == 100)
			{
				cout << "C" << endl;
			}
			switch (number > 100 )
			{
			case 1: cout << "C";
				number -= 100		;
				goto a;
				break;

			}
		}

		else if (number > 499 && number < 1000)
		{
			if (number == 500)
			{
				cout << "D" << endl;
			}
			switch (number > 500)
			{
			case 1: cout << "D";
				number -= 500;
				goto a;
				break;

			}
		}
		else if (number > 999)
		{
			if (number == 1000)
			{
				cout << "M" << endl;
			}
			switch (number > 999)
			{
			case 1: cout << "M";
				number -= 1000;
				goto a;
				break;

			}
		}

	
	}
	return 0;
}