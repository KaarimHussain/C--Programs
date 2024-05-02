#include <iostream>
using namespace std;
int main(){
	double num1, num2;
	char choice;
	cout << "Enter your first value \n";
	cin >> num1;
	cout << "Enter your second value \n";
	cin >> num2;
	cout << "Enter an operator \n";
	cout << "(+) \n";
	cout << "(-) \n";
	cout << "(*) \n";
	cout << "(/) \n";
	cin >> choice;
	switch(choice){
		case '+':
			cout << "Result: " << num1 + num2;
			break;
		case '-':
			cout << "Result: "<< num1 - num2;
			break;
		case '*':
			cout << "Result: "<< num1 * num2;
			break;
		case '/':
			if(num2 != 0){
				cout << "Result: "<< num1 / num2;
			}else{
				cout << "Cannot be divided by zero!";	
			}
			break;
		default:
			cout << "Invalid Operator";
			break;
	}
	
}
