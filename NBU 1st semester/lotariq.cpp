#include<iostream>
#include <clocale>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
	
	int rnd;
	int currentNum;
	int sum;
	int interval;

	setlocale(LC_ALL, "bulgarian");
	
	
	
	cout << "Благодарим Ви за участието в навата лотария! При общ сбор на цифрите от печелившата комбинация от 20, Вие ще спечелите нов ажтомобил! Печелившата комбинация е:" << endl;
	cout << "Моля, въведете допустимия интеравал за вашата лотария!";
	cin >> interval;
	 
	srand(time(0));
	rnd = (rand()%interval) + 1;
	cout << rnd;
	
	if (rnd > 3)
	{
		for (size_t i = 0; i < rnd; i++)
		{
			currentNum = rnd % 10;
			cout << currentNum << endl;
			sum += currentNum;
			cout << currentNum<< endl;
			rnd /= 10;
		}
	}
	if (sum>20)
	{
		cout<<"Поздравления, току що спечелихте чисто нов ажтомобил!" << endl;
	}
	else
	{
		cout << "Опитайте пак! Късмет!" << endl;

	}

	return 0;
}