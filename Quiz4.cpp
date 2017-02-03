#include <iostream>

using namespace std;

int a,b,c;

 //Functions

int minimumThree(int x, int y, int z)
  {
    if (x <= y && x <= z)
      return x;
    else
      if (y <= x && y <= z)
            return y;
      else
           return z;
  }

int sumsquares (int x, int y, int z)
  {
    int x2 = x*x;
    int y2 = y*y;
    int z2 = z*z;
    int suma = x2+y2+z2;

    return suma;
  }

int main (){

  int a,b,c, min, suma;

  cout << "This program will give you the minimun of three numbers given. \nAlso, it will give you the sum of the squares of these numbers.\n";
  cout << "Give me your numbers. \n";
  cin >> a;
  cin >> b;
  cin >> c;

  min = minimumThree(a,b,c);

  cout << "The minimum of the three numbers is: " <<min<< ". " << endl;

  suma = sumsquares(a,b,c);

  cout << "The sum of the numbers squared is: " <<suma<< ". " << endl;

return 0;

}
