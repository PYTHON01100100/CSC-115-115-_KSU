#include <iostream>
using namespace std;

int main()
{
  float x,y,a;

    cout<<"Enter First number: ";
    cin>> x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"Which operation do you want? ";
    cout<<"\n(1) Addation\n(2) Multiplication\n(3) Division"<<endl;;
    cin>>a;
    if (a==1)
         cout<<x<<" + "<<y<<" = "<<x+y;
    else if (a==2)
        cout<<x<<" * "<<y<<" = "<<x*y;
    else if (a==3)
         cout<<x<<" / "<<y<<" = "<<x/y;
    else
        cout<<"Error!, Again please.";
}
