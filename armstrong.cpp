#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int value;
	cout<<"Enter values to check: ";
	cin>>value;
	int size = to_string(value).size();
	int armstrong_sum=0;
	int temp = value;
	while(temp!=0){
		int last_dgt=temp%10;
		temp=temp/10;
		armstrong_sum+=pow(last_dgt,size);
	}
	if(armstrong_sum==value){
		cout<<value<<" is a armstrong";
	}
	else{
		cout<<value<<" is not a armstrong";
	}
}
