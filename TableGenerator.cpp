#include <iostream>
using namespace std;
int main(){
	int n,i,range;
	cout << "Enter your value to Generate table \n";
	cin >> n;
	cout << "Enter the range \n";
	cin >> range;
	for(i = 1; i <= range; i++){
		cout <<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}
