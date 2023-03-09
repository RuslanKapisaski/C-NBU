#include <iostream>
using namespace std;

int main()
{
	int time;
	cout << "Insert time: ";
	cin >> time;
	string result = (time < 18) ? "Good day." : "Good evening.";
	cout << result;
	return 0;
}