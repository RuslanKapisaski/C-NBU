#include <iostream>
#define MIN 100
#define MAX 1000
using namespace std;

int main()
{
	
	int input;
	cin >> input;

	cout << "Please, type an integer between minimal interval: " << MIN << " and maximum interval: " << MAX << endl;
	if (input>MIN && input < MAX)
	{
		cout << "SUCCESS! Your input: ";
		cout << input;
		cout << " belongs to the interval:";
		
	}
	else
	{
		cout << "Sorry :( ... your integer is out of range.";
	}
	return 0;
}
