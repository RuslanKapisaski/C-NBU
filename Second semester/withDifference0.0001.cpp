#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double znamenatel = 1;
	double chislitel = 4;
	double minusOperation = 0;
	double plusOperation = 0;
	double piSum = 0;
	double difference = 0;
	int iterations = 0;
	float condition = 0.001;
	double pi = 0;

	int znak = 1;

	do 
	{
		znamenatel += 2;
		//събиране на операциите с дробни числа от всяка итерация
		plusOperation = znak * chislitel / znamenatel;
		
		znamenatel += 2;
		minusOperation = (-1)*znak * chislitel / znamenatel;

		piSum += minusOperation + plusOperation;
		difference = plusOperation - minusOperation;
		//пресмятаме по формулата p = 4-(1/k+2) +  (1/5) - (1/k+2)
		pi = 4 - piSum;
		iterations++;
	} while (difference > condition);


	cout << "Number Pi is:"<<pi<<" after "<<iterations<<" iterations!"<<"\n";


	return 0;
}
