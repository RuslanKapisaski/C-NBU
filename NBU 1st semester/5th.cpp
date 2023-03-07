#include <iostream>
#include <string>
using namespace std;

#include <clocale>
int main()
{
	setlocale(LC_ALL, "bulgarian");

	cout << "Моля, въведете желания от Вас символ:";
	char symbol;
	cin >> symbol;

	cout << "Моля, въведете желания от Вас брой на редове:";
	int lines;
	int columns = 0;

	cin >> lines;
	while (lines > 0)
	{

		for (size_t i = 0; i < lines; i++)
		{

			columns++;
			for (size_t i = columns; i < lines + 1; i++)
			{
				if (columns == 1)
				{
					std::cout << std::string((columns), symbol) << std::endl;
				}
				else
				{
					std::cout << std::string(((columns * 2) - 1), symbol) << std::endl;
				}

				break;
			}

		}
		lines--;
	}

	return 0;
}