#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()

{

  int d, h, mins;
  string m;

  m = "";
  mins = 60;

  cout << "\nEnter a month between (Jan - Dec): ";
  cin >> m;

 if (m == "Jan" || m == "Mar" || m == "May" || m == "Jul" || m == "Aug" || m == "Oct" || m == "Dec")
    { 
      d = 31;
      h = 744;
      mins *= h;

      cout << "\nThere are " << mins << " minutes in " << m << endl << endl;
    }

  else if ( m == "Apr" || m == "Jun" || m == "Sep" || m == "Nov")
    {
      d = 30;
      h = 720;
      mins *= h;

      cout << "\nThere are " << mins << " minutes in " << m << "." << endl << endl;
    }

  else if (m == "Feb")
    {
      d = 28;
      h = 672;
      mins *= h;

      cout << "\nThere are " << mins << " minutes in " << m << "." << endl << endl;
    }
  
  else
    {
      cout << "\nInvalid Input\n" << endl;
    }

  return 0;
}
