#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int c;
  static double PI, r, a, l, w, h, b;

  PI = 3.14;

  cout << "\n1. Calculate the Area of Circle\n"
       << "2. Calculate the Area of a Rectangle\n"
       << "3. Calculate the Area of a Rectangle\n"
       << "4. Quit\n"
       << "\nEnter your choise (1-4)\n";
  cin >> c;
  switch (c)

    {
    case 1:cout << "\nEnter radius of the circle: \n";
      cin >> r;

      if (r >=0) //Calculate
	{
	  a=PI * (pow(r,2));
	  cout << "\nArea = " << a << "\n" << endl;
	}
      else
	{
	  cout << "\nInvalid radius\n";
	}
      break;

    case 2:cout << "\nEnter length and width of the rectangle: ";
      cin >> l >> w ;

      if (l>=0 && w>=0)
	{
	  a = l*w;
          cout << "\nArea = " << a << "\n" << endl;
	}
      else 
	{
	  cout << "\nInvalid radius\n";
	}
      break;

    case 3: cout << "\nEnter length of the base nd height of the triangle: ";
	cin >> b >> h;

      if (b>=0 && h>=0)
	{
	a=b*h*.5;
	cout << "\nArea = " << a << "\n" << endl;
	}
      else
	{
	  cout << "\nInvalid radius\n";
	}
      break;

    case 4: return 0;

    default:cout << "Only 1-4 are valid inputs.";
    }
  
  return 0;
}
