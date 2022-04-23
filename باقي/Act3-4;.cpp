#include <iostream>

using namespace std;

int main()
{
int grade;
cout<<"Enter your grade: ";
cin>>grade;
if (grade>=95 && grade<=100)
    cout<<"A+";
else if (grade>=90)
    cout<<"A";
else if (grade>=85)
    cout<<"B+";
else if (grade>=80)
    cout<<"B";
else  if (grade>=75)
    cout<<"C+";
else if (grade>=70)
    cout<<"C";
else  if (grade>=65)
    cout<<"D+";
else  if (grade>=60)
    cout<<"D";
else
    cout<<"F";
cout<<"\nThank you";
}
