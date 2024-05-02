#include <iostream>
using namespace std;
int main(){
	const int maxNum = 10;
	int sum = 0, count = 0;
	int number;
	for(int i = 0; i < maxNum; i++){
		cout << "Enter a number "<< (i + 1) << ": ";
		cin >> number;
		if(number < 0){
			break;
		}
		sum += number;
		count++;
	}
	if(count > 0){
		cout << "Sum of " << count << " positive numbers: "<< sum << endl;
	}else{
		cout << "No Positive numbers entered. "<< endl;
	}
	return 0;
}
