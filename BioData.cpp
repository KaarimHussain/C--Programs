#include <iostream>

int main(){
	char name[20];
	char gender[50];
	int age;
	float height;
	std::cout<<"\t \t \t------------------------------\n";
	std::cout<<"Enter your name \n";
	std::cin>>name;
	std::cout<<"Enter your gender \n";
	std::cin>>gender;
	std::cout<<"Enter your age \n";
	std::cin>>age;
	std::cout<<"Enter your height \n";
	std::cin>>height;
	std::cout<<"Your name is "<<name<<"\n";
	std::cout<<"Your gender is "<<gender<<"\n";
	std::cout<<"Your age is "<<age<<"\n";
	std::cout<<"Your height is "<<height<<"\n";
	std::cout<<"\t \t \t------------------------------\n";
}
