#include <iostream>
#include <cmath>

using namespace std;

int main (){

  float nums[10], sum=0, av, stdev1=0, dev, stdev3;

  cout<<"This program will make calculate the sum, average, and the SDev of the given numbers. \n";
  cout<<"Give me 10 numbers \n";

  for (int i=0; i<10; i++)
      {
        cin>>nums[i];
        sum=sum+nums[i];
      }

  av=sum/10;


  for(int i=0; i<10; i++)
  {
    dev+=pow(nums[i]-av,2);
  }

dev=sqrt(dev/(10-1));

cout<<"The total is "<<sum<< ", the average is "<<av<<" and the standard deviation is "<<dev<<"\n";

return 0;
}
