#include <iostream>
#include <fstream>
using namespace std;

struct home
{
  string owner;
  double price;
  int bedRm;
};

void fillArray(home[], int);
//void print2bedRm();

int main ()
{
  const int SIZE;
  home ar[SIZE];

  fillArray(ar, SIZE);

}

void fillArray(home p[], int)
{
  ifstream fin;
  int i=0;
  fin.open("homes.txt");
  if (fin)
    {
      while (fin >> owner[i] >> price[i] >> bedRm[i])
	{
	  i++;
	}
    }
  fin.close();

}

//void print2bedRm()
//{
// for()
//  {
//    if()
//prinHm;
//  }
//}

