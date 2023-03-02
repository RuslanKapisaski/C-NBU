#include <iostream>;
using namespace std;

int main()
{
	cout << "Please, insert two numbers in order to get known about the shortened mathematical operations. " << endl;

	int a = 0;
    int b = 0;
	int c = a;
    int d = b;

	cin >> a;
	cin >> b;

	cout<<"a++"<< endl;
	a++;
	cout << a << endl;
	a--;

	cout << "b++" << endl;
	b++;
	cout << b<< endl;
	b--;

	cout << "a+=b" << endl;
	a += b;
	cout << a << endl ;
	a -= b;

	cout << "a-=b" << endl;
	a -= b;
	cout << a << endl;
	a += b;

	cout << "a*=b" << endl;
	a *= b;
	cout << a << endl;
	a /= b;

	cout << "a/=b" << endl;
	a /= b;
	cout << a << endl;
	a *= b;

	






	return 0;
}