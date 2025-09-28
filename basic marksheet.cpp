#include <iostream>
using namespace std;
int main()
{
 int m1,m2,m3,m4,m5;
 float t,pp ,CGPA;
 cout<<"+----------------------------+";
 cout<<"\n|  MARKSHEET  CALCULATOR     | \n";
 cout<<"+----------------------------+";
 cout<<"\nEnglish ";cin>>m1;
 cout<<"ACCOUNTANCY ";cin>>m2;
 cout<<"Bst ";cin>>m3;
 cout<<"ECONOMICS ";cin>>m4;
 cout<<"Information Practics ";cin>>m5;
 cout<<"+-----------------------+";
 cout<<"\n|      MARKSHEET        |\n+-----------------------+\n|  English      =   "<<m1<<"  |"<<"\n|  Accountancy  =   "<<m2<<"  |"<<"\n|  Bst          =   "<<m3<<"  |"<<
 "\n|  Economics    =   "<<m4<<"  |"<<"\n|  IP           =   "<<m5<<"  |""\n";
 cout<<"+-----------------------+";
 t=m1+m2+m3+m4+m5;
 pp=t/500*100;
 cout<<"\nTOTAL MARKS ARE = "<<t;
// pp=(Total/500)*100;
 cout<<"\n\nTHE PRECENTAGE = "<<pp<<"%";
 CGPA=pp/9.5;
 cout<<"\n\nTHE CGPA = "<<CGPA;
 return 0;
}
