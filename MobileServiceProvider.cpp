//Program to calculate a customer's monthly bill, depending on the subscription packages.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{

  int m, min, pmins;
  double ta, admin, pmonth, tadmin;
  char p;

  //Ask user for package purchased and minutes used.
  cout << "__________________________________________________________________";
  cout << "__________________________________";
  cout << endl << endl;
  cout << "Package A: For $39.99 per month 450 minutes are provided. ";
  cout << "Additional minutes are $0.45 per minute." << endl << endl;
  cout << "Package B: For $49.99 per month 900 minutes are provided. ";
  cout << "Additional minutes are $0.40 per minute." << endl << endl;
  cout << "Package C: For $59.99 per month 1200 minutes are provided. ";
  cout << "Additional minutes are $0.35 per minute." << endl << endl;
  cout << "Package D: For $69.99 per month unlimited minutes provided." << endl;
  cout << "___________________________________________________________________";
  cout << "________________________________";
  cout << endl << endl;

  cout << "Enter package purchased: Package ";
  cin >> p;

  //Determine the package.
  if (p== 'a' || p=='A')

    {
      cout << "\nEnter amount of minutes used: ";
	cin >> m;
      cout << endl;
      
      pmins = 450;
      pmonth = 39.99;
      admin = .45;

      //Calculate minutes used.
      min = m - pmins;

      if (min>=0)

	{
	  tadmin = min * admin;
	}

      else

	{
	  admin = 0;
	}

      //Calculate total amount.
      ta = pmonth + tadmin;
      cout << "Total amount due: $" << ta << endl << endl;
    }

  else if (p=='b' || p=='B')

    {
      cout << "\nEnter amount of minutes used: ";
        cin >> m;
      cout << endl;

      pmins = 900;
      pmonth = 49.99;
      admin = .40;

      //Calculate minutes used.
      min = m - pmins;

      if (min>=0)

        {
          tadmin = min * admin;
        }

      else

        {
          admin = 0;
        }

      //Calculate total amount.
      ta = pmonth + tadmin;
      cout << "Total amount due: $" << ta << endl << endl;
    }
 
  else if (p=='c' || p=='C')

    {
      cout << "\nEnter amount of minutes used: ";
        cin >> m;
      cout << endl;

      pmins = 1200;
      pmonth = 59.99;
      admin = .35;

      //Calculate minutes used.
      min = m - pmins;

      if (min>=0)

        {
          tadmin = min * admin;
        }

      else

        {
          admin = 0;
        }

      //Calculate total amount.
      ta = pmonth + tadmin;
      cout << "Total amount due: $" << ta << endl << endl;
    }

  else if (p=='d' || p=='D')

    {
      pmonth = 69.99;

     //Calculate total amount.
      ta = pmonth;
      cout << "Total amount due: $" << ta << endl << endl;
    }

  else 

    {
      cout << "Invalid input" << endl << endl;
    }
}
