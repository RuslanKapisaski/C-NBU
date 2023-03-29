#include <iostream>
using namespace std;

class CarTrip {
	string destination;
	double milaege;
	double fuel;
public:
	CarTrip(string dest, double milaege, double gorivo)
	{

		this->destination = dest;
		this->milaege = milaege;
		this->fuel = gorivo;
	}

	void travel()
	{
		
		// 1500/50 = 10 
		double neededFuel = milaege / fuel;
		if (neededFuel>fuel)
		{
			/*We are using key word throw in order to stop the execution of our program if the condition is not satisfied.
			No needed return statement, because throw automatically breaks program*/

			throw "No fuel";
		}
	
		fuel -= neededFuel;
		cout << "Have a nice trip to: " << destination << endl;
	}
};

int main()
{
	CarTrip myTrip("Vienna", 1500,50);
	try
	{
		myTrip.travel();
		myTrip.travel();
		myTrip.travel();


	}
	//cathing the type of exception
	catch(const char* exp){
		cout << exp;
	}

	//default cath constructor 
	catch (...)
	{
		cout << "Exception!Fuel problem!" << endl;


	}
	return 0;
}