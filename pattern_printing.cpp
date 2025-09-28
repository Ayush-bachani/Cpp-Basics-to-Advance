#include<iostream>
using namespace std;
int main(){
	int k=3;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(j>k){
				cout<<" *";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
		k--;
	}
}
