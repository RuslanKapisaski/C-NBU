#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;

float devision(float x, float y);
int main()
{
	devision(2, 4);
	return 0;
}

float devision(float x, float y)
{
	float result = 0;
	float swap;
	if (y > x) {
		swap = x;
		x = y;
		y = swap;
	}

	try
	{
		if (x == 0 || y == 0)
		{
			throw std::runtime_error("Devision by zero is unacceptable!");
		}
		else
		{

			cout << "Result by deviosn is: " << (result = x / y);
		}
	}
	catch (const std::runtime_error& except)
	{
		cout << except.what();
		cout << "Type: " << typeid(except).name() << endl;

	}
}
