#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

int factoriel(int x)
{
	int factoriel=1;
	for (int i = 1; i <= x; i++)
	{
		factoriel *= i;
	}
	return factoriel;
}
int main()
{
	
	
	double denom = 1;
	float condition = 0.0001;
	double diff = 0;

	double x = 1;

	double sinResult = 1;
	double totalResult = 1;
	double plusIntr = 1;
	double minusIntr = 1;
	int iterations = 0;
	double sinFormula = 1;
	int coefficient = 1;
	int power = 1;

	

	double denominator = 1;
	cout << 'x';
	do 
	{
		cout << "      -     ";
		  power += 2;
		  denom += 2;
			minusIntr =pow(-1*x, power)/ factoriel(denom);
			cout << "x ^ " << power <<" / "<< denom << "!" << "    +    ";
			power += 2;
			denom += 2;
			cout << "x ^ " << power << " / " << denom<<"!";
		    plusIntr = pow(x, power) / factoriel(denom);
			
			sinResult+= minusIntr + plusIntr;
			diff = plusIntr - abs(minusIntr);

			iterations++;
			
	} while (diff > condition);
	cout << "\n";
	totalResult = 1 - sinResult;
		cout << "Sin(x) is: " << totalResult<<" after "<<iterations<<" iterations";





	return 0;
}
