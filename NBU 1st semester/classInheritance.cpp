#include<iostream>
using namespace std;

class B {
public:
    B();
    B(int n);
    void print() const;
protected:
    int b;
};
//def construct
B::B() {
    b = 0;
}
//param construct
B::B(int n) {
    b = n;
}

//base class func
void B::print() const {
    cout << "B: " << b << "\n";
}

class D : public B {
public:
    D();
    D(int n);
    void print() const;
};

//def construct
D::D() {
}
//param construct
D::D(int n) {
    b = n;
}
//derived class function
void D::print() const {
    cout << "D: " << b << "\n";
}


int main()
{
    D b(10);
    b.print();
	return 0;
}