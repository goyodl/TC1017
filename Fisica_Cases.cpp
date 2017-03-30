#include <iostream>
using namespace std;

/*double sumencio (double x,double y)
 {
    double eats = x+y;
    return eats;
  }

double restencio (double x, double y)
  {
    double sleeps = x-y;
    return sleeps;
  }

double productencio (double x, double y)
  {
    double bakes (x*y);
    return bakes;
  }

double dividio (double x, double y)
  {
    double runs = x/y;
    return runs;
  }
*/

int main (){

double  x, y, a1, a2, a3, a4, a5;
char rpt;

/*  a1 = sumencio(x,y);
  a2 = restencio(x,y);
  a3 = productencio(x,y);
  a4 = dividio(x,y);
*/


  cout << "This program will do several operations between two given numbers. \n";
  cout << "\n";


  do {


  cout << "Type the first number: " << endl;
  cin >> (x);
  cout << "\n";
  cout << "Type the second number: " << endl;
  cin >> (y);
  cout << "\n";
  cout << "What do you want to do? Type the number correspondig to the operation.\n";
  cout << "\n";





  a1 = (x+y);
  a2 = (x-y);
  a3 = (x*y);
  a4 = (x/y);

  int input;



 cout<<"1. suma\n";
 cout<<"2. resta\n";
 cout<<"3. multiplication\n";
 cout<<"4. division\n";
 cout << "\n";
 cout<<"Selection: ";
 cout << "\n";

 cin >> input;

  switch ( input ) {
  case 1:
    cout << "\nThe sum of this numbers is: " << a1<< ".\n";
    break;
  case 2:
  cout << "\nThe difference of this numbers is: " << a2 << ".\n";
    break;
  case 3:
    cout << "\nThe multiplication of this numbers is: "<< a3 << ".\n";
    break;
  case 4:
    cout << "\nThe division of this numbers is: " << a4<< ".\n";
    break;
  default:
    cout<<"\nError, bad input, quitting program.\n";
    break;
  }


  cout<<"Do you want to calculate another numbers? Y = YES/ N = NO \n";
  cin>>rpt;

}

while( rpt =='Y'|| rpt  ==  'y');

cout << "\n";
cout<<"Thanks, bye bye :)\n";

return 0;


}
