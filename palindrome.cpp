#include<iostream>
#include<string>
using namespace std;
int main(){
	string palind;
	bool flag=true;
	cout<<"Enter value to check: ";
	cin>>palind;
	int value_len = palind.length()-1;
	for(int i=0; i<palind.length(); i++){
		if(palind[i]==palind[value_len]){
		value_len--;}
		else{
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<palind<<" is a palindrome";
	}
	else{
		cout<<palind<<" is not a palindrome";
	}
}
