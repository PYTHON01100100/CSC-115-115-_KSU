#include <iostream>

using namespace std;

int main()
{
   int num, rep, y; //rep = repetition
   cout<<"Enter the number: ";
   cin>>num;
   for(rep=1; rep<=num; rep++)
{
for(y=1; y<=num; y++)
{
 cout<<"*";
}
 cout<<"\n";
}
}
