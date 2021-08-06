#include <iostream>
using namespace std;

int main()
{
 int FirstArray[5];
 int secArray[5];
 int sumtArray[5];
    cout<<"Enter 5 numbers for first aray: ";

    // input from user to array
 for(int i=0; i<5; ++i)
{
    cin>>FirstArray[i];
}


    cout<<"\n Enter 5 numbers for Seconde array: ";
    for (int k=0; k<5; ++k)
{

    cin>>secArray[k];
}

for(int n=0; n<5; ++n)
{
    cout<<FirstArray[n]+secArray[n]<<" | ";
}
}
