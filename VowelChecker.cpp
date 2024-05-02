#include <iostream>
using namespace std;
int main(){
	char input;
	bool isLowerCase,isUpperCase;
	cout<<"Enter your alphabet \n";
	cin>>input;
	
	isLowerCase = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u');
	isUpperCase = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');
	if(isLowerCase || isUpperCase)}{
		cout<<"It's a vowel: "<<input<<endl;
	}else{
		cout<<"It's not a vowel: "<<input<<endl;
	}
}
