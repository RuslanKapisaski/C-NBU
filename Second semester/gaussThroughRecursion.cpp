#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int gaussRecursion(int m, int n)
{
	if (m == n) return m;
	return m + gaussRecursion (m + 1, n);
}

int main()
{
	int m, n,r;
	cout << "Write m value: ";
	cin >> m;
	cout << "Write n value: ";
	cin >> n;
	if (n<m)
	{
		r = m;
		n = m;
		m = r;
	}
	cout<<"Result of summing numbers between n and m: "<<gaussRecursion(m, n);



	return 0;
}