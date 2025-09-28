#include <iostream>
using namespace std;
int main(){

{
 int a;
 cout<<"      ###########################################\n";
 cout<<"           NUMBER ODD/EVEN CHECKING SYSTEM\n";
 cout<<"      ###########################################\n";
 cout<<"\nENTER THE NUMBER TO CHECK :-  ";
 cin>>a;
 if(a%2==0)
  cout<<"\n+--------------------------------+"<<"\n"<<"|  **  "
  <<a<<" IS AN EVEN NUMBER  **  |\n"
  <<"+--------------------------------+"<<"\n";
 else
  cout<<"\n+------------------------------+"<<"\n"<<"|  **  "
  <<a<<" IS A ODD NUMBER  **  |\n"
  <<"+------------------------------+"<<"\n";
}
 return 0;
 
}
