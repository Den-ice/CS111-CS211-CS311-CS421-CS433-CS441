//Purpose: This program uses two-dimensional arrays using data from a file to assign values to the array items and then processing them.
//Implented by: Denice Hickethier
//12/3/2016
//User Information: The program displays 10 items in a menu. The user has the choice to select the item where some of them will need further input from the user, then calls the function of choice from the menu and prints the value returned from the function.

#include <iostream>
#include <fstream>
using namespace std;

const int rows = 12;
const int cols = 4;

void getTotal(int[][cols], int&);
void getAverage(int, double&);
void getRowAvg(int[][cols], int, double&);
void getColumnAvg(int[][cols], int, double&);
void getTargetInRow(int[][cols], int, int&);
void getTargetInCol(int[][cols], int, int&);
void getHighestInRow(int[][cols], int,  int&);
void getLowestInRow(int[][cols], int, int&);
void getHighestandLowestInCol(int[][cols], int, int&, int&);
void getColumnOfHighestInRow(int[][cols], int, int&);

int main ()
{
  int r, c, target, ch, er=0, min=0, max=0, numbers[rows][cols], total=0;
  double avg=0; 

  getTotal(numbers,total);
  do
    { 
      cout << "1. Get the Total\n"
	   << "2. Get the Average\n"
	   << "3. Get the Row Average\n"
	   << "4. Get the Column Average\n"
	   << "5. Get the Target in the Row\n"
	   << "6. Get the Target in the Column\n"
	   << "7. Get the Highest in the Row\n"
	   << "8. Get the Lowest in the Row\n"
	   << "9. Get the Highest and Lowest in the Column\n"
	   << "10. Get the Column of the Highest Row\n"
	   << "Enter your choice: ";
      cin >> ch;
      cout << endl;
      
      if (ch>=1 && ch<=10)
	{
	  switch (ch)
	    {
	    case 1: 
	      {cout << "The total values of all the values of the array: "<<total << endl;}
	      break;
	    case 2:
	      {getAverage(total,avg);}
	      break;
	    case 3:
	      {
		do
		  {
		    cout << "Enter a Row number between 0-11: ";
		    cin >> r;
		    if (r>=0 && r<=11)
		      {
			getRowAvg(numbers,r,avg);
		      }
		    else
		      {
			cout << "Invalid row number.\n\n";
		      }
		  }while(r<0 || r>11);
	      }
	      break;
	    case 4: 
	      {
		do
		  {
		    cout << "Enter a Column number between 0-3: ";
		    cin >> c;
		    if (c>=0 && c<=3)
		      {
			getColumnAvg(numbers,c,avg);
		      }
		    else
		      {
			cout << "Invalid row number.\n\n";
		      }
		  }while(!(c>=0 && c<=3));
	      }		
	      break;
	    case 5: 
	      {
		do
		  {
		    cout << "Enter a Row number between 0-11 and a target number: ";
		    cin >> r >> target;
		    
		    if (r>=0 && r<=11)
		      { 
			er=0;
			for(int C=0; C<cols; C++)
                          {
                            if (target==numbers[r][C])
                              {
				getTargetInRow(numbers,r,target);
                              }
                            else
                              {
                               er++;
			       if (er==4)
			       {
				 cout << "Invalid row/target number\n\n";
			       }

                              }
                          }
		      }
		    else
		      {
			cout << "Invalid row/target number\n\n";
		      }
		  }while(!(r>=0 && 11>=r) || er==4);
	      }
	      break;
	    case 6:
	      {
		do
		  {		
		    cout << "Enter a Column number between 0-3 and a target number: ";
		    cin >> c >> target;
		    
		    if(c>=0 && c<=3)
		      {
			er=0;
			for(int R=0; R<rows; R++)
			  {
			    if (target==numbers[R][c])
			      {
				getTargetInCol(numbers,c,target);
			       
			      }
			    else
			      {
				er++;
				if (er==12)
				  {
				    cout << "Invalid row/target number\n\n";
				  }

			      }
			  }
		      }
		    else
		      {
                        cout << "Invalid row/target number\n\n";
                      }
		  }while(!(c>=0&&c<=3)|| er==12); 
	      }
	      break;
	    case 7:
	      {
		int lm=0;
		do
		  {
		    cout << "Enter a Row number between 0-11: ";
		    cin >> r;
		    if (r>=0 && r<=11)
		      {
			getHighestInRow(numbers,r,lm);
		      }
		    else
		      {
			cout << "Invalid row number.\n\n";
		      }
		  }while(r<0 || r>11);
	      }
	      break;

	    case 8:
              {
                int sm=0;
                do
                  {
                    cout << "Enter a Row number between 0-11: ";
                    cin >> r;
                    if (r>=0 && r<=11)
                      {
                        getLowestInRow(numbers,r,sm);
                      }
                    else
                      {
                        cout << "Invalid row number.\n\n";
                      }
                  }while(r<0 || r>11);
              }
              break;
	    case 9: 
	      {
		do
		  {
		    cout << "Enter a Column number between 0-3: ";
		    cin >> c;
		    if (c>=0 && c<=3)
		      {
			getHighestandLowestInCol(numbers,c,min,max);
		      }
		    else
		      {
			cout << "Invalid row number.\n\n";
		      }
		  }while(!(c>=0 && c<=3));
	      }
	      break;
	    case 10:
	      {
		do
                  {
                    cout << "Enter a Row number between 0-11: ";
                    cin >> r;
                    if (r>=0 && r<=11)
                      {
                        getColumnOfHighestInRow(numbers,r,max);
                      }
                    else
                      {
                        cout << "Invalid row number.\n\n";
                      }
                  }while(r<0 || r>11);
	      }
	      break;
	    }      
	}

      else
	{
	  cout << "Choice Invalid\n\n";
	}
      
    }while(!(ch>=1 && ch<=10));
  
  return 0;
  
}
void getTotal(int num[][cols], int& tl)
{
  ifstream fin;
  
  fin.open("2Dnumbers.txt");
  
  if (fin)
    {
      for(int r=0; r<rows; r++)
        {
          for(int c=0; c<cols; c++)
            {
              fin >> num[r][c];
	      tl += num[r][c];
			      
	    }
	}
      fin.close();
    }
  else
    {
      cout << "No input file found\n";
    }
}

void getAverage(int tl, double &avg)
{
  avg = tl/48.0;
  cout << "The average of all the values in the array: "<<avg << endl;
}

void getRowAvg(int num[][cols], int row, double& avg )
{
  int tl=0;

    for(int c=0; c<cols; c++)
      {
	tl += num[row][c];
      }
    avg = tl/4.0;
    cout << "The average of the values in row "<< row << ": " << avg<< endl;
}

void getColumnAvg(int num[][cols], int col, double& avg)
{
  int tl=0;

  for(int r=0; r<rows; r++)
    {
      tl += num[r][col];
    }
  avg = tl/12.0;
  cout <<"The average of the values in column "<< col << ": " << avg<< endl;
}

void getTargetInRow(int num[][cols], int r, int& t)
{
  for(int c=0; c<cols; c++)
    {
      num[r][c];
      if (num[r][c]==t)
	{
	  cout << c << " is the column subscript of " << t << " in row " << r << endl;
	  c=t;	
	}
    }
}

void getTargetInCol(int num[][cols], int c, int& t)
{
  for(int r=0; r<rows; r++)
    {
      num[r][c];
      if (num[r][c]==t)
        {
          cout << r << " is the column subscript of " << t << " in row " << c << endl;
	  r=t;  
	}
    }
}

void getHighestInRow(int num[][cols], int r, int& l)
{
  int max = 0;

  for(int c=0; c<cols; c++)
    {
      num[r][c];
      if (num[r][c]>max)
        {
          max=num[r][c];
        }
    }
  l=max;
  cout << max << " is the smallest value in row " << r <<endl;
}

void getLowestInRow(int num[][cols], int r, int& s)
{
  int min = num[r][0];

  for(int c=0; c<cols; c++)
    {
      num[r][c];
      if (num[r][c]<min)
        {
          min=num[r][c];
        }
    }
  s=min;
  cout << min << " is the smallest value in row " << r <<endl;
}

void getHighestandLowestInCol(int num[][cols], int c, int& l, int& h)
{
  l=num[0][c];
  h=num[0][c];

  for(int r=0; r<rows; r++)
    {
      num[r][c];
      if (num[r][c]<l)
	{
	  l=num[r][c];
	}
      else if (num[r][c]>h)
	{
	  h=num[r][c];
	}
    }
  cout << l << " and " << h << " are the smallest and largest values in column " << c << endl;
}

void getColumnOfHighestInRow(int num[][cols], int r, int& max)
{
  for(int c=0; c<cols; c++)
    {
      num[r][c];
      if (num[r][c]>max)
        {
          max=num[r][c];
        }
    }
  cout << max <<" is the largest value in row " << 3  << ", and its column number is ";

  for(int c=0; c<cols; c++)
    {
      num[r][c];
      if (num[r][c]==max)
        {
          cout << c << " in row " << r << endl;
	  max=c;
        }
    }
}
