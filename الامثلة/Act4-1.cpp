#include <iostream>
using namespace std;

int main()
{
  int num;
  int sum = 0;

    cout<<"Enter the number: ";
    cin>>num;

 while(sum < 100)
{
  sum += num;

  cout<<"The sum now is: "<<sum<<endl;
  cout<<"Enter the number: ";
  cin>>num;

}

  cout<<"\nThe finaly sum is: "<<sum<<endl;


}
