#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

int num1,num2,cont;
string resp;

do{
  srand(time(NULL));
  num1=1+rand()%(101);
  cont=14;

  cout<<"I will pick one random number between 1 and 100. \nYou would have 15 chances to guess"<<endl;
  cout<<"What is your first guess?"<<endl;
  cin>>num2;

while (num2!=num1 & cont>0){
  cont=cont-1;
if (num2>num1){
  cout<<num2<<" is too high, try again." <<endl;
  cin>>num2;
}

else{
  cout<<num2<<" is too low, try again."<<endl;
  cin>>num2;
}}

if(num2!=num1){
  cout<<"You couldn’t do it, the number I was thinking was "<<num1<<endl;
  }
  else{
    cout<<"Hey! You guessed right in "<<15-cont<<" tries."<<endl;
  }
      cout<<"Would you like to play again? (yes/no) "<<endl;
      cin >> resp;
    }while(resp!= "no" && resp != "NO");
return 0;
}
