#include <iostream>
using namespace std;
int main(){
	int in1,sum = 0;
	cout << "Enter a Positive val";
	cin >> in1;
	if(in1 > 0){
		for(int i = 1; i < in1; i++){
			sum += i;
		}
		cout << "Sum of natural numbers from 1 to " << in1 << " is " << sum << endl; 
	}else{
		cout << "The Value should be positive \n";
	}
}
