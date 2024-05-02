#include <iostream>
// Program to check if number is even or odd
using namespace std;
int main(){
	int input;
	cout<<"Even & Odd Checker\n";
	cout<<"Enter your number\n";
	cin>>input;
	
	if(input % 2==0){
		cout<<"Your number is even\n";
		cout<<input;
	}else{
		cout<<"Your number is odd\n";
		cout<<input;
	}
}
