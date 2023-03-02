#include <iostream>;
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	if (a == b || a<b)
	{
		cout << a << endl;
	}
	else if (a<b && a!=c )
	{
		cout << a << endl;
	}
	 
	if (a==b)
	{
		cout << a << endl;
	}
	else if (a!=b)
	{
		b^ a;
		cout << b << endl;
	}
	

	cout <<'<<' << endl;
	int g = 10;
	g << a;
	cout << g << endl;


	cout << '>>' << endl;

	g >> a;
	cout << g << endl;



	return 0;
}