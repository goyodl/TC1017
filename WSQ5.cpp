#include <iostream>
using namespace std;

int sumencio (int x,int y)
  {
    int eats = x+y;
    return eats;
  }

int restencio (int x, int y)
  {
    int sleeps = x-y;
    return sleeps;
  }

int productencio (int x, int y)
  {
    int bakes (x*y);
    return bakes;
  }

int dividio (int x, int y)
  {
    int runs = x/y;
    return runs;
  }

int residulia (int x, int y)
  {
    int drives = x%y;
    return drives;
  }


int main () {

int x, y, a1, a2, a3, a4, a5;

  cout << "This program will do several operations between two given numbers." << endl;
  cout << "\n";
  cout << "Type the first number: " << endl;
  cin >> (x);
  cout << "Type the second number: " << endl;
  cin >> (y);
  cout << "\n";

  a1 = sumencio(x,y);
  a2 = restencio(x,y);
  a3 = productencio(x,y);
  a4 = dividio(x,y);
  a5 = residulia(x,y);

  cout << "The sum of this numbers is: " << a1<< ".\n";
  cout << "The difference of this numbers is: " << a2 << ".\n";
  cout << "The multiplication of this numbers is: "<< a3 << ".\n";
  cout << "The integer based division of this numbers is: " << a4<< ".\n";
  cout << "The reminder of integer division of this numbers is: " << a5<< ".\n";




return 0;


}
