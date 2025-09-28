#include <iostream>
using namespace std;

int main(){
 cout<<"- - - - - *********************** - - - - -\n";
 cout<<"             TABLE CALCULATOR              \n";
 cout<<"- - - - - *********************** - - - - - \n";
 int a;
 int c;
 cout<<"\nENTER A NUMBER :- ";
 cin>>a;
 cout<<" \nFor loop \n\n";
 c=a;
 {
 int b;
 for (b=1;b<=10;b++)
 cout<<a<<" X "<<b<<" = "<<a*b<<"\n";
 }
 {
  cout<<"\n Cout Method \n\n";
  cout<<a<<" X 1 ="<<c*1<<"\n"<<
  a<<" X 2 ="<<c*2<<"\n"<<
  a<<" X 3 ="<<a*3<<"\n"<<
  a<<" X 4 ="<<a*4<<"\n"<<
  a<<" X 5 ="<<a*5<<"\n"<<
  a<<" X 6 ="<<a*6<<"\n"<<
  a<<" X 7 ="<<a*7<<"\n"<<
  a<<" X 8 ="<<a*8<<"\n"<<
  a<<" X 9 ="<<a*9<<"\n"<<
  a<<" X 10 ="<<a*10;
    
 }
 return 0;
}
