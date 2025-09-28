#include <iostream>
using namespace std;
int main()
{
 int year;
 cout<<"enter the year ";cin>>year;
 if(year%4==0 || year%400==0 && year%100==0)
 {
  cout<<"\nTrue "<<year<<" is a leap year";
 }
  else
  cout<<"\nFalse "<<year<<" is not a leap year";
}
