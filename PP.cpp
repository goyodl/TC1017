#include <iostream>
#include <cmath>

using namespace std;

//Producto Punto

double prpu (double x1, double y1, double z1, double x2, double y2, double z2)
{

  double sumt;

  sumt = (x1*x2)+(y1*y2)+(z1*z2);
  return sumt;

}

double angle (double x1, double y1, double z1, double x2, double y2, double z2)
{
  double ang, sumt, pi;
  pi = 3.14159265;

  sumt = (x1*x2)+(y1*y2)+(z1*z2);
  ang = (acos(sumt/(sqrt((pow(x1,2))+(pow(y1,2))+(pow(z1,2)))
  *(sqrt((pow(x2,2))+(pow(y2,2))+(pow(z2,2))))))*180/pi);
  return ang;
}



int main() {

  double i1, j1, k1, i2, j2, k2, pp, angl;

  cout << "This program will calculate the dot product of two vectors and the angle between them. \n";
  cout << "Give me the value in the 'x' axis of your first vector. \n";
  cin >> i1;
  cout << "Give me the value in the 'y' axis of your first vector. \n";
  cin >> j1;
  cout << "Give me the value in the 'z' axis of your first vector. \n";
  cin >> k1;

  cout << "Give me the value in the 'x' axis of your second vector. \n";
  cin >> i2;
  cout << "Give me the value in the 'y' axis of your second vector. \n";
  cin >> j2;
  cout << "Give me the value in the 'z' axis of your second vector. \n";
  cin >> k2;
  cout << "\n";

  pp = prpu (i1, j1, k1, i2, j2, k2);
  angl = angle (i1, j1, k1, i2, j2, k2);

  cout << "The producto punto of this vectors is: "<<pp<<".\n";
  cout << "The angle between this vectors is: "<<angl<<" degrees.\n";

    return 0;

}
