#include <iostream>
using namespace std;

int main()
{
	int num;
	int remainder;
	int z = 0; int o = 0; int t = 0; int te = 0; int f = 0; int fe = 0; int s = 0; int sn = 0; int e = 0; int n = 0; int tn = 0;
	cin >> num;

	while (num > 0)
	{
		remainder = num % 10;
		num /= 10;
		switch (remainder)
		{
			
		case 1: (remainder == 1);
			o++;
			break;
		case 2: (remainder == 2);
			t++;
			break;
		case 3: (remainder == 3);
			te++;
			break;
		case 4: (remainder == 4);
			f++;
			break;
		case 5: (remainder == 5);
			fe++;
			break;
		case 6: (remainder == 6);
			s++;
			break;
		case 7: (remainder == 7);
			sn++;
			break;
		case 8: (remainder == 8);
			e++;
			break;
		case 9: (remainder = 9);
			n++;
			break;
		case 0: (remainder = 0);
			z++;
			break;
		}

	}
	std::cout <<" Number/Times writtened" << endl;
  std::cout  << "1/" << o
		<< " 2/" << t
		<< " 3/" << te
		<< " 4/" << f
		<< " 5/" << fe
		<< " 6/" << s
		<< " 7/" << sn
		<< " 8/" << e
		<< " 9/" << n
		<< " 0/" << tn << endl;
   


	return 0;
}
