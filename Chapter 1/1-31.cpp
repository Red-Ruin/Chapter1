#include <iostream>
using namespace std;

int main(){

	int a;
	int b;
	int n;
	n = 1;

	while(n > 0){

	cout << "Enter an integer: ";
	cin >> a;
	cout << endl;

	b = a % 2;

	if(b > 0){
		cout << "Odd Number";
		cout << endl;
		cout << endl;
	}

	if(b == 0){
		cout << "Even Number";
		cout << endl;
		cout << endl;
	}
}
}