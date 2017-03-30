#include <iostream>

using namespace std;

int main() {

  double wei, heig, bmi;

  cout << "How much you weight? (kg)\n";
  cin >> wei;

  cout << "How tall are you? (m)\n";
  cin >> heig;

  bmi = wei/(heig*heig);

  cout << "Your body mass index is: " << bmi << "\n";
  cout << "\n";


  return 0;
}
