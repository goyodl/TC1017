#include <iostream>

using namespace std;

int main() {

  double fh, ce;

  cout << "This programs converts temperature in Fahrenheit to Celsius. \n";
  cout << "Give the temperature you want to convert in Fahrenheit. \n";
  cin >> fh;
  ce = 5*(fh-32)/9;
  cout << "The temperature is " << ce <<"º Celsius. \n";

  if (ce >= 100)
      {
          cout << "Water boil at this temperature. \n";
      }
    else
      {
        cout << "Water does NOT boil at this temperature. \n";
      }
  return 0;
}
