#include <iostream>
using namespace std;
int main()
{
  int Cel,Fah;
  cout << "Enter Celsius temperature:";
  cin >> Cel;
  cout <<"Fahrenheit = " <<1.8*Cel+32<<endl;
  Fah=1.8*Cel+32;
  cout << "Now weather in Thailand is ";
  cout << ((Fah > 70)==0?"Cool":"Hot"<<endl;

}