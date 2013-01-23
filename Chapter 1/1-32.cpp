#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	int n;
	n = 1;

	while(n > 0){

	cout << "Enter a number: ";
	cin >> a;
	cout << endl;

	cout << "Enter the number that is the suspected multiple: ";
	cin >> b;
	cout << endl;

	c = a % b;

	if(c == 0){
		cout << b << " is a multiple of " << a;
		cout << endl;
		cout << endl;
	}

	if(c != 0){
		cout << b << " is not a multiple of " << a;
		cout << endl;
		cout << endl;
	}
}
}

