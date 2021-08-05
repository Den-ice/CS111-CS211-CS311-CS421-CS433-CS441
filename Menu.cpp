#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
  int temp,h,ch;

  //ask user for temp. and hrs value

    cout << "Enter temperature: "; 
    cin >> temp;
    cout << endl;
    cout << "Enter hours: ";
    cin >> h;
    cout << endl;

    if (((temp < -50 || temp > 150) || (temp >= -50 && temp <= 150)) && (h < 0 || h > 80))
      {
	cout << "The number is invalid.\n\n";
	return 0;      
      }

    else if ((temp >= -50 && temp <= 150) && (h > 0 && h < 80))  
      {
	cout << "The temperature is valid\n";

	cout << "\n1. Calculate salary\n" << "2. Verify temperature\n" << "3. Quit\n";
	cout <<"\nEnter which option you would like to use: ";
        cin >> ch;	

	switch (ch)
	  {
	  case 1: h *= 12;
	    cout << endl << "Your salary is " << h << ".\n";
	    break;
	  case 2: if (temp < 60)
	      {
		cout << "\nCold\n\n";
	      }
	    else if (temp < 100)
	      {
		cout << "\nHot\n\n";
	      }
	    else 
	      {
		cout << "\nVery hot\n\n";
	      }
	    break;
	  case 3: cout << endl;

	    break;
	  default: cout << "\nChoose only 1,2,3.\n\n";
	  }
      }
    else 
      {
	cout << "Invalid\n\n";

      }

	    return 0; 
}
