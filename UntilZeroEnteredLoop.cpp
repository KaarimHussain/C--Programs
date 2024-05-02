#include <iostream>
using namespace std;
int main(){
	int num, sum = 0;
	cout << "Enter a number (0 to quit): ";
	while (cin >> num){
		if(num == 0){
			break;
		}
		sum += num;
		cout << "Enter a number (0 to quit): ";
	}
	cout << "The Sum of all entered numbers is: "<< sum << endl;
}
