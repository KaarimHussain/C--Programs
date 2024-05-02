#include <iostream>
//Vote Casting Age Checker
//if ,else statement
int main(){
	int age;
	std::cout<<"Enter your age \n";
	std::cin>>age;
	
	if(age>=18){
		std::cout<<"You are able to cast the vote \n";
		std::cout<<age;
	}
	else{
		std::cout<<"You are not able to cast the vote \n";
		std::cout<<age;
	}
		return 0;
}
