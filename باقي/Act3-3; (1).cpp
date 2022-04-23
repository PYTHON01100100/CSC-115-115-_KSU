#include <iostream>
using namespace std;

int main()
{
  int x,y,z;

  cout<<"Enter number 1: ";
  cin>>x;
  cout<<"Enter number 2: ";
  cin>>y;
  cout<<"Enter number 3: ";
  cin>>z;

if(x>=y && x>=z)
    cout<<"The large number is: "<<x;

if(y>=x && y>=z)
    cout<<"The large number is: "<<y;

if(z>=x && z>=y)
    cout<<"The large number is: "<<z;
}
