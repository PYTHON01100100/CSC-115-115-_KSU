#include <iostream>
using namespace std;

int main()
{

int n1, n2, op; // n1 = number 1 , n2 = number 2 , op = operation
   while(op !=5 ){
cout<<"Enter the number A: ";
cin>>n1;
cout<<"Enter the number B: ";
cin>>n2;

cout<<"(1) +\n(2) -\n(3) *\n(4) /\n(5) Quot"<<endl;
cout<<"What number operation do you want? ";
cin>>op;

/*---------------------------------------------------------------------------------------------------------------------*/

if(op==1)
    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
else if(op==2)
        cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
else if(op==3)
        cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
else if(op==4)
        cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
else if(op==5)
        cout<<"Bye"<<endl;
else
    cout<<"Again!"<<endl;

}
}

