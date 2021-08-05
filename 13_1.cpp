#include <iostream>
#include <fstream>
using namespace std;

const int N=5;

void higherThanAvg(string[],double[]);

int main ()
{
  string names[N];
  double grades[N];
  ifstream fin;
  
  fin.open("13input.txt");

  if (fin)
    {
      for(int n=0; n<N; n++)
	{
	  fin>> names[n]>> grades[n];
	  //  cout<<names[n]<<grades[n]<<endl;
	}
            higherThanAvg(names,grades);
      
    }
  fin.close();
  //  cout<<names[n]<<grades[n]<<endl;
  return 0;

}

void higherThanAvg(string names[], double grades[])
{
  ofstream fout;

  fout.open("13output.txt");

  for(int y=0; y<N;y++)
    {
      if(grades[y]>84.8)
	{
	  fout<< names[y]<<" "<<grades[y]<<endl;
	  cout<<names[y]<<" "<<grades[y]<<endl;
	}
    }
  fout.close();
}
 
