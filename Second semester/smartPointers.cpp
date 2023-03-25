#include<iostream>
#include<memory>
using namespace std;

void uniquePointers() {

	//Unique pointers - used because of their advantage for self-dealloaction
	unique_ptr<int>unPtr = make_unique<int>(50);
	cout <<"Reference: " << unPtr << endl;
	cout <<"Value: " << *unPtr << endl;
	unique_ptr<int>unPtr2;
	/*unPtr2 = unPtr; - we can not reassign the value of one unique pointer to another */
	//In this way we can move the value of one to another pointer, but after that the mooved pointer is deallocated (we can not approach it)
	unPtr2 = move(unPtr);
	cout << "Unique pointer 2: " << unPtr2<<endl;
	cout <<"After deallocation of unique pointer 1: " << unPtr;

};


void sharedPointers() {
	//Shared pointers - used for the same reason as the unique pointers, but here after reassignment there is no self-deallocation on reassigned pointer
	shared_ptr<int>shPtr = make_shared<int>(100);
	shared_ptr<int>shPtr2;
	cout << "Reference of shared pointer 1: " << shPtr << endl;
	cout << "Value of shared pointer 1: " << *shPtr << endl;
	shPtr2 = shPtr;
	cout << "Reference of shared pointer 1 after reassignment: " << shPtr << endl;
	cout << "Value of shared pointer 1 reassignment: " << *shPtr << endl;

	cout << "Reference of shared pointer 2: " << shPtr2 << endl;
	cout << "Value of shared pointer 2: " << *shPtr2 << endl;
};


void weakPointers() {
	//Weak pointers will not keep the object allive but shared - will!
	weak_ptr<int>wePtr;
	{
		shared_ptr<int>shPtr1 = make_shared<int>(250);
		wePtr = shPtr1;
	}

};
int main()
{
	uniquePointers
        sharedPointers()
	weakPointers();
}
