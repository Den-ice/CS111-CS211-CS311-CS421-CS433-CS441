//PURPOSE: This program asks the user to enter a choice tht is offered in the menu part of the program, which calculates integer inputs from the user to the selection of: number splitting, fibonacci series, base conversion, and pattern printing. 
//IMPLEMENTED BY: Denice Hickethier
//11/10/2016
//USER INFORMATION: This program uses functions to carry out the selecions from the display menu.
#include <iostream>
#include <cmath>
using namespace std;

void numberSplitting (int input)
{
  int length =1, d=input, mod;

    while ((d /=10) && d !=0)
      {
	length++;
      }

    cout << "Output: ";

    for (int n=length; n>=1;n--)
      {
	if (input >0)
	  {
	    mod = input%10;
	    input /= 10;
	    cout << mod << " ";
	  }
      }
    cout << endl << endl;
  }

void fibonacciSeries (int first, int second, int x)
{
  int n = 0;
  
  if (x==1)
    {
      cout << first << " ";
    }
  else if (x==2)
    {
      cout << first << " " << second << " ";
    }
  else 
    {
      cout << first << " " << second << " ";
    }
  
  for (int i = 3; i<=x; ++i)
    {
      n = first+second;
      first=second;
      second=n;
      cout << n << " ";
    }
  cout << endl << endl;
}

void baseConversion (int input, int base)
{
 
    double ans=0.0;
    int a=input;

    ans += 1/ pow (input,base);
      
    cout << ans << endl << endl;
 }

void patternPrinting (int rows)
{
  int r, c;

  for (r=1;r<=rows;r++)
    {
      for (c=1; c<=rows+1; c++)
        {
          if (c<=r)
            cout<< "*";
          else
            cout<<c-r;
        }
      cout<<endl<<endl;
    }
}

int main()
{
  int x, ch, rows, input, base, first, second;
  
  do
    {
      cout << "Math Menu\n"
	   << "\t1. Number Splitting\n"
	   << "\t2. Fibonacci Sequence\n"
	   << "\t3. Base conversion\n"
	   << "\t4. Pattern printing\n"
	   << "\t5. Quit\n"
	   << "Enter your choice: ";
      cin >> ch;
      cout << endl;
      
      if (ch<5 && ch>=1)
	{
	  switch (ch)
	    {
	    case 1: do
		{
		  cout << "Enter a positive integer: ";
		  cin >> input;
		  
		  if (input>0)
		    {
		      numberSplitting(input);
		    }
		  else 
		    {
		      cout << "\nInvalid input.\n\n";
		    }
		}while(input<1);
	      break;
	      
	    case 2: do
		{
		  cout <<  "Enter 3 positive integers: ";
		  cin >> first >> second >> x;
		  
		  if (first>0 && second>0 && x>0)
		    {
		      fibonacciSeries(first, second, x);
		    }
		  else
		    {
		      cout << "\nInvalid input.\n\n";
		    }
		}while(first<1 || second<1 || x<1);
	      break;
	      
	    case 3:do
		{
		  cout <<  "Enter 2 positive integers: ";
		  cin >> input >> base;
		  
		  if (input>0 && base>0)
		    {
		      baseConversion(input, base);
		    }
		  else
		    {
		      cout << "\nInvalid input.\n\n";
		    }
		}while(input<1 || base<1);
	      break;
	      
	    case 4:do
		{
		  cout <<  "Enter a positive integers: ";
		  cin >> rows;
		  
		  if (rows>0)
		    {
		      patternPrinting(rows);
		    }
		  else
		    {
		      cout << "\nInvalid input.\n\n";
		    }
		}while(rows<1);
	      break;
	    }
	} 
      
      else if (ch!=5)
       	{
	  cout << "Invalid choice.\n";
	}
      
    }while (!(ch==5));  
  
  return 0;
}
