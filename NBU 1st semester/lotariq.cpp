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
	
	
	
	cout << "���������� �� �� ��������� � ������ �������! ��� ��� ���� �� ������� �� ����������� ���������� �� 20, ��� �� ��������� ��� ���������! ����������� ���������� �:" << endl;
	cout << "����, �������� ���������� ��������� �� ������ �������!";
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
		cout<<"������������, ���� �� ���������� ����� ��� ���������!" << endl;
	}
	else
	{
		cout << "�������� ���! ������!" << endl;

	}

	return 0;
}