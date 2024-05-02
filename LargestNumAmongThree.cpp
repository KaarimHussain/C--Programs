#include <iostream>

// Program to check if given number is largest then the other number

using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers\n";
	cin>>n1>>n2>>n3;
	cout<<"\n";
	if(n1 > n2 && n1 > n3){
		cout<<n1<<" is Largest then "<<n2<<" "<<n3;
	}
	else if(n2 > n1 && n2 > n3){
		cout<<n2<<" is Largest then "<<n1<<" "<<n3;
	}
	else if(n3 > n1 && n3 > n2){
		cout<<n3<<" is Largest then "<<n1<<" "<<n2;
	}
	else{
		cout<<"Invalid Request";
	}
}
