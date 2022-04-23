#include <iostream>
using namespace std;

struct student
{
 char name[50];
 int roll;
 float age;
}
s;

int main()
 {
    cout << "Enter information..";
    cout << "\nEnter name: ";
    fgets(s.name, sizeof(s.name), stdin);

    cout << "Enter ID number: ";
    cin >> s.roll;
    cout << "Enter Age: ";
    cin>> s.age;

    cout << "Displaying Information..";
    cout << "\nName: ";
    cout << s.name;
    cout << "ID number: " << s.roll;
    cout << "\nAge: " << s.age;

    return 0;
}
