#include <iostream>
using namespace std;
int main(){
	int val = 0;
	cout<<"Enter a value?";
	cin>>val;
	if(input != 0){
		if(input > 0){
			cout<<"Value is an positive integer"
		}else{
			cout<<"Value is an negative integer";
		}
	}else{
		cout<<"Value is zero";
	}
}
