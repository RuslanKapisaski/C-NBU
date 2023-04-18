#include <iostream>
#include <string>
#include <fstream>
using namespace std;




int main()
{

	fstream myFirstFile;
	myFirstFile.open("Tasks.txt", ios::out);//write in file
		if (myFirstFile.is_open())
		{
			for (int i = 0; i < 5; i++)
			{
				myFirstFile << "Task[" << i << "]" << "is already waiting me." << endl;
			}
		}
		myFirstFile.close();
	
		fstream mySecondFile;
		mySecondFile.open("Tasks.txt",ios::in);//read from file
		if (mySecondFile.is_open())
		{
			string line;
			while (getline(mySecondFile,line))
			{
				cout << line<<"\n";
			}
		}

	return 0;
}