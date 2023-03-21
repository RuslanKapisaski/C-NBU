#include<iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int factoriel(int num)
{
	

	if (num==0)
	{
		return 1;
	}
	
	return num * factoriel(num - 1);
}



int main()
{
	
	cout<<factoriel(3);

	return 0;
}
