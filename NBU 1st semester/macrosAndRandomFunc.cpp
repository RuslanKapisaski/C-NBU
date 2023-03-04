#include <iostream>
#include <cstdlib>
#include<ctime>
#define MIN 1
#define MAX 100
using namespace std;

int main()
{
	int num;
	srand(time(0));
	num = rand() % ((MAX - MIN) + 1);
	cout << num;
	return 0;
}
