#include <iostream>
#include <string>
using namespace std;

#include <clocale>
#include <cmath>
{

int main()
	setlocale(LC_ALL, "bulgarian");
	int columns;
	int counter;
	std::cout << "Ìîëÿ, âúâåäåòå ïîëîæèòåëî ÷èñëî:" << endl;
	cin >> columns;
	int n = 0;

	if (columns > 0)
	{
		for (size_t i = 0; i < columns + 1; i++)
		{
			int y = i;
			if (i == 0)
			{
				for (size_t i = 0; i < columns; i++)
				{
					std::cout << 0;
				}
				std::cout << "" << endl;
			}
			else if (i > 0)
			{
				std::cout << 1;
				while (y > 1)
				{
					//std::cout << i;
					for (size_t z = 1; z < i; z++)
					{
						std::cout << z + 1;
						y--;
					}


				}
				n++;
				for (size_t i = n; i < columns; i++)
				{
					std::cout << 0;
				}
				std::cout << "" << endl;

			}

		}


	}
	else
	{
		std::cout << "Âúâåäîõòå íåâàëèäíî ÷èñëî" << endl;
	}

	return 0;
}
