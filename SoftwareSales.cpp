#include <iostream>
using namespace std;

#define UNIT_PRICE 99.0
#define NEWLINE '\n'

int main ()
{
  int q;
  double d,r;

  //Ask for quantity

  cout << "How many units are sold?\n";
    cin >> q;

    if (q>=100)
      {
	d = 0.5;

	//Calculate
	r = q * UNIT_PRICE * d;

	//Display

	cout << "Total cost of purchase: " << r << endl<<endl;
      }

    else if (q>=50 && q<=99)
      {
	d = 0.4;

	r = q * UNIT_PRICE * d;

	cout << "Total cost of purchase: " << r << endl<<endl;
      }

    else if (q>=20 && q<= 49) 
      {
	d = 0.3;

	r = q * UNIT_PRICE * d;

	cout << "Total cost of purchase: " << r << endl<<endl;
      }
    else if (q>=10 && q<=19)
      { 
	d = 0.2;

	r = q * UNIT_PRICE * d;
	
	cout << "Total cost of purchase: " << r << endl<< endl;
      }
    else if (q>=1 && q<=9)
      {
	d = 0.0;

	r = q * UNIT_PRICE * d;

	cout << "Total cost of puchase: " << r << endl << endl;
      }
    else 
      {
	cout << "The numbers of units must be greater than.\n"<<endl;
      }

  return 0;
}
