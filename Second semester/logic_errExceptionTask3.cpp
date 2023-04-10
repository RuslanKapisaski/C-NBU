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
	if (y > x) {
		x = y;
		y = x;
	}

	try
	{
		if (x == 0 || y == 0)
		{
			throw std::runtime_error("Devision by zero is unacceptable!");

		}
		else
		{

			throw std::logic_error("Wrong assigning values method! ");
		}
	}
	catch (const std::runtime_error& runtErr)
	{
		cout << endl;
		cout << runtErr.what();
		cout << "Type: " << typeid(runtErr).name() << endl;

	}
	catch (const std::logic_error& logerr)
	{
		cout << logerr.what();
		cout << "Type: " << typeid(logerr).name() << endl;

	}
}
