#include<iostream>
using namespace std;
#include <cmath>
//x = double / n = int / math.pow

double Prod(double  n, int p, double (*f)(double), int (*limit)(int),bool state)
{
    
        double res = 1;
        for (int i = 0; i < limit(p); i++)
        {
            res *= f(i);
        }
        cout << res;
        return res;
    
    
}
// kak da opravq limita?
int PowLimit(int p)
{
    int limit = p;
    return limit; // 2^4 -> 4 iteracii => 2*2 + 2*2 + 2*2 + 2*2
}
int FactorielLimit(int counter) 
{ 
    return counter;
}
double PowLogic(double n,int pow)
{
    
        return n*Pow;
   
}
double FactorielLogic(double n)
{
   
    return n*n;
}
double Pow(double n, int p)
{
    
   
    return Prod(n, p,PowLogic,PowLimit,true);
}

double Factoriel(double n,double counter)
{
    counter = n;
    return Prod(n, counter, FactorielLogic, FactorielLimit,false);
}



int main()
{
    bool isPowered = false;
    double x{ 0 };
    int n{ 0 };
    char command = ' ';
   
    cout << "Type '1' if you want power or '2' if you want factoriel";
    cin >> command;
    if (command =='1')
    {
        cout << "Insert number x: ";
        cin >> x;

        cout << "Insert a natural number n: ";
        cin >> n;
        Pow(x, n);
    }
    else if (command =='2')
    {
        cout << "Insert number x: ";
        cin >> n;

        Factoriel(n, n);
    }
    else
    {
        cout << "Wrong input! ";
    }


    PowLimit(n);
    FactorielLimit(x);

   
    return 0;
}

