#include <iostream>
#include <string>
using namespace std;

#include <clocale>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "bulgarian");
	int columns;
	int counter;
	std::cout << "Моля, въведете валидно положитело число:" << endl;
	cin >> columns;
	int n = 0;

	if (columns > 0 && columns < 10)
	{

		//main cicle
		for (size_t i = 0; i < (columns * 2) - 1; i++)
		{
			int leftNum = i;
			int rightNum = i;
			if (i == 0)
			{
				for (size_t i = 0; i < columns * 2; i++)
				{
					std::cout << 0;
				}
				std::cout << "" << endl;
			}
			else if (i > 0)
			{
				std::cout << 1;

				//left logic
			l:
				while (leftNum > 1)
				{
					for (size_t z = 1; z < i; z++)
					{
						std::cout << z + 1;
						leftNum--;
					}
				}
			r:
				// zero for left
				for (size_t i = n; i < columns - 1; i++)
				{
					std::cout << 0;
				}

				//// zero for right
				for (int i = columns - 1; i > n; i--)
				{
					std::cout << 0;
				}


				//righ logic
				while (rightNum > 0)
				{
					for (int y = i - 1; y >= 0; y--)
					{
						cout << y + 1;
						rightNum--;
						/*goto l;*/
					}
					n++;
				}
				cout << "" << endl;
			}

		}


	}
	else
	{
		std::cout << "Въведохте невалидно число.Моля въведете едноцифрено число!" << endl;
	}

	return 0;
}