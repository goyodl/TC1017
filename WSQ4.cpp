#include <iostream>

using namespace std;

int main() {

  int a, lw, hg, fac = 0;

  //The sum integer is defined in 0.

  cout << "Give me the lower number: \n";
  cin >> lw;
  cout << "Give me the higher number: \n";
  cin >> hg;

  for (a = lw; a <= hg; a++)
  {
    fac = fac + a;
  }

cout << "The sum of numbers between " << lw << " and " << hg << " is: " << fac << "\n";



  return 0;
}
