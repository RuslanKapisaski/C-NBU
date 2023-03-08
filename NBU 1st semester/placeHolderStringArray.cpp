# include <iostream>
using namespace std;
#include <string>;

int main()
{
	string sequence = " ";
	string numbersOFStirngs[10];
	int n{ 0 };
	int sizeArr[20];
	int size{0};
	cout << "Type a string of maximum 9 chars:";
	getline(cin, sequence, '\n');
	
	char* array = new char[sequence.length() + 1];
	int counter{ 0 };
	int x{ 0 };
	for (int i = 0; i < sequence.length(); i++)
	{
			array[i] = sequence[i];
			if (sequence[i] == ' ')
			{
				    x++;
					sizeArr[x] = 0;
					x++;

					size = 0;
					
				
				continue;
			}
			else
			{
				cout << "Char:" <<"{" << i << "}" << array[i] << endl;
				size++;
				sizeArr[x] = size;
				
				
				
			}
	}

	for (int i = 0; i < sequence.length(); i++)
	{
		if (sizeArr[i+2]>sizeArr[i])
		{
			cout<<"Increasing sequence!" << endl;
			exit(0);
		}
		else
		{
			cout << "Decreasing sequence!" << endl;
			exit(0);
		}
	}
	{

	}


	return 0;
}
