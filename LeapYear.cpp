#include <iostream>
using namespace std;
int main(){
	int input;
	cout << "Enter your Year";
	cin >> input;
	if(input %400 == 0){
		cout<<input<< " is a Leap Year \n";
	}else if(input %100 == 0){
		cout << input << " is not a Leap Year \n";
	}else if(input %4 == 0){
		cout<<input<< " is a Leap Year \n";
	}else{
		cout<<input<< " is not a Leap Year \n";
	}
}
