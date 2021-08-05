// Math tutoring program with a switch statement
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{
  int result, re, ch, r1, r2, r3, r4, r5, r, rd;
  char remainder;
  unsigned seed = time (0);
  srand (seed);

do
  {
    r1 = rand()%101;
    r2 = rand()%101;
    r3 = rand()%101;
    r4 = rand()%101;
    r5 = rand()%101;

    cout << "\nMath Tutor Menu\n"
	 << "----------------------\n"
	 << "1. Addition problem\n"
	 << "2. Subtraction problem\n"
	 << "3. Multiplication problem\n"
	 << "4. Division problem\n"
	 << "5. Quit the program\n"
	 << "----------------------\n"
	 << "Enter an option of (1-5): ";
    cin >> ch;

    switch (ch)
      {
      case 1: cout << endl << r1 << " + " << r2 << " + " << r3 << " = ";
	cin >> result;
	re = r1 + r2 + r3;
	if (!(result==r1+r2+r3))
	  {
	    cout << "\nThe correct answer here is " << re << endl;
	  }
	break;

      case 2: cout << r1 << " - " << r2 << " - " << r3 << " = ";
	cin >> result;
	re = r1 - r2 - r3;
	if (!(result==r1-r2-r3))
	  {
	    cout << "\nThe correct answer here is " << re << endl;
	  }
	break;

      case 3: cout << r1 << " * " << r2 << " * " << r3 << " = ";
	cin >> result;
	re = r1 * r2 * r3;
	if (!(result==r1*r2*r3))
	  {
	    cout << "\nThe correct answer here is " << re << endl;
	  }
	break;

      case 4: cout << "(Answer with a remainder)\n" << r4 << "/" << r5 << " = ";
	cin >> r >> remainder >> re;

	result = r4 / r5;
	rd=r4%r5;

	if (!((r==r4/r5)&(re==r4%r5)))
	   {
	    cout << "\nThe correct answer here is " << result << "r" << rd << endl;
	   }
	 break;

       case 5: return 0;
         break;

       default: "Invalid.\n";
      
      }
   
  }while (ch>5 || ch<5);

}
