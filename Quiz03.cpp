#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  double num, sq, cub;
  cout << "This program calculates the square and cubic root of a number. \n";
  cout << "\n";

  cout << "Give me a number. \n";
  cin >> num;
if (num<=0)
  {
    cout << "\n";
  }
  sq = sqrt(num);
  cub = cbrt(num);

  cout << "The square root of your number is: " <<sq<<"\n";
  cout << "The cubic root of your number is: " <<cub<<"\n";

  return 0;
}
