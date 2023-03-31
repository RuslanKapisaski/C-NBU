#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;


class Textile {
private:
	string typeOfClothes;
	string brand;
	float price;
	int address;
public:
	string* availableAdresses;
	Textile(string typeClths, string brand,float price)
	{
		this->typeOfClothes = typeClths;
		this->brand = brand;
		this->price = price;
		this->address = address;

		address = 2;
		availableAdresses = new string[address];
		availableAdresses[0] = "Sofia-centre";
		availableAdresses[1] = "Varna-centre";

		cout <<"[" << typeClths<<"]" << "[" << brand <<"]" <<"[" << price<<"$]" <<"\n";
		for (int i = 0; i < address; i++)
		{
			cout << availableAdresses[i] << "\n";
		}
	}
	/* The 8 rules of destructors :
	  1-Destructors always start with ~ sign
	  2-The name of destructors is the same as the name of the class and constructors
	  3-Destructors(and constructors) does not have a return type
	  4-Destructors does not recieve any parameters
	  5-They need to be a member of our class
	  6-The need to be placed in the public area of our class
	  7-It can be only one destructor in one class
	  8-Except the order of cnstructing objects, during their deallocation they are deleting in reverse mode (Just like stack deallocation)*/
	~Textile()
	{
		cout << "Destrucor called!" << endl;
		delete[] availableAdresses;
	}

};

int main()
{
	Textile luxury("Dress", "Monini",250);
	Textile exclusive("T-shirt", "U.S Polo", 120);

	return 0;
}