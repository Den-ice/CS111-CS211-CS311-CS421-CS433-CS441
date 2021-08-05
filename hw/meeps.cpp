#include <iostream>
#include <iomanip>
using namespace std;

void getInfo(int &, double &);
void getWallSquareFeet(double &);
double numberOfGallons(double);
double laborHours(double);
void displayCost(int, double, double);

int main()
{
  int x = 0;
  double y = 0, z = 0, a = 0, b = 0;

  getInfo(x,y);
  z=x; 
  getWallSquareFeet(z);
  a = numberOfGallons(z);
  b = laborHours(a);
  displayCost(a,y,b);  
  
  return 0;
}

void getInfo(int &numberOfRooms, double &paintPrice)
{
  while (numberOfRooms < 1)
    {
      cout << "\nNumber of rooms: ";
      cin >> numberOfRooms;
      if (numberOfRooms < 1)
	{
	  cout <<  "\nInvalid Input\n";
	}
    }
  while (paintPrice < 10.00)
    {
      cout << "\nPricing of paint per gallon: ";
      cin >> paintPrice;
      if (paintPrice < 10.00)
	{
	  cout << "Invalid Input\n";
	}
    }
}

void getWallSquareFeet(double &wallSquareFeet)
{
  double totalsf = 0.0;
  int counter = wallSquareFeet;
  for (int i=1; i <= counter; i++)
    {
      cout << "\nAmount of square feet for room " << i << ": ";
      cin >> wallSquareFeet;

      while (wallSquareFeet < 0)
	{ 
	  cout << "\nInvalud Input\n";
	  cout << "\nAmount of square feet for room " << i << ": ";
	  cin >> wallSquareFeet;
	  	
	}
      totalsf += wallSquareFeet;
    }
  wallSquareFeet = totalsf;
}

double numberOfGallons(double wallArea)
{
  wallArea /= 110;
   if (wallArea<0.5)
     {
       wallArea +=1;
     }
   return wallArea;
}

double laborHours(double wallArea)
{
  wallArea *=8;
  return wallArea;
} 

void displayCost(int gallons, double paintPrice, double hours)
{
  double labor = 0, total = 0;
  labor = 25.00*hours;
  total = (gallons*paintPrice)+labor;

  cout << "\n1. The number of gallons of paint required: " << gallons + 1 
       << fixed << setprecision (2) << "\n2. The hours of labor required: " << hours
       << "\n3. The cost of the paint: " << paintPrice
       << "\n4. The labor charges: " << labor
       << "\n5. The total cost of the paint job: " << total << endl << endl;

}
