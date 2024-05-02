#include <iostream>
using namespace std;
int main(){
	int n,factorial = 1;
	cout << "Enter a non-negative integer";
	cin >> n;
	if(n < 0){
		cout << "Error! Factorial of a negative number is undefined.";
	}else{
		for(int i = 1; i <= n; i++){
			factorial *= i;
		}
		cout<<"Factorial of "<< n << " is "<< factorial;
	}
	return 0;
}
