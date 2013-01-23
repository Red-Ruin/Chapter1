#include <iostream>
using namespace std;

int main(){

	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int n;
	n = 1;

	while(n > 0){

	cout << endl;
	cout << "Enter a number from 0 to 99,999: \t";
	cin >> a;
	cout << endl;

	b = a / 10000;
	c = (a - b * 10000) / 1000;
	d = (a - (b * 10000 + c * 1000)) / 100;
	e = (a - (b * 10000 + c * 1000 + d * 100)) / 10;
	f = (a - (b * 10000 + c * 1000 + d * 100 + e * 10));
	
	if(a > 9999){
		if(a < 99999){
			cout << "The Scientific Notation of " << a << " is: " << endl;
			cout << endl;
			cout << "(" << b << " * 10000)" << endl;
			cout << "(" << c << " * 1000)" << endl;
			cout << "(" << d << " * 100)" << endl;
			cout << "(" << e << " * 10)" << endl;
			cout << "(" << f << " * 1)" << endl;
		}
	}

	if(a < 9999){
		if(a > 999){
			cout << "The Scientific Notation of " << a << "is: " << endl;
			cout << endl;
			cout << "(" << c << " * 1000)" << endl;
			cout << "(" << d << " * 100)" << endl;
			cout << "(" << e << " * 10)" << endl;
			cout << "(" << f << " * 1)" << endl;
		}
	}

	if(a < 999){
		if(a > 99){
			cout << "The Scientific Notation of " << a << "is: " << endl;
			cout << endl;
			cout << "(" << d << " * 100)" << endl;
			cout << "(" << e << " * 10)" << endl;
			cout << "(" << f << " * 1)" << endl;
		}
	}
	
	if(a < 99){
		if(a > 9){
			cout << "The Scientific Notation of " << a << "is: " << endl;
			cout << endl;
			cout << "(" << e << " * 10)" << endl;
			cout << "(" << f << " * 1)" << endl;
		}
	}
	if(a < 9){
		cout << "The Scientific Notation of " << a << "is: " << endl;
		cout << endl;
		cout << "(" << f << " * 1)" << endl;
	}

	if(a > 99999){
		cout << "The Scientific Notation of " << a << "is: " << endl;
		cout << endl;
		cout << "Error.";
		cout << endl;
	}

	}
}