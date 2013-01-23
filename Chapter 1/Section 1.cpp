#include <iostream>
using namespace std;

int main () {
	double f;
	double m;
	int a;
	int n;
	n = 1;

	while(n > 0)
	{

	cout << "Length in Feet(1) or Meters(2)? ";
	cin >> a;

	if(a == 1) {

		cout << endl;

		cout << "Enter Length: ";
		cin >> f;

		cout << endl;

		m = f / 3.28;

		cout << f << " feet is " << m << " meters." << endl;

		cout << endl;
	}
	
	if(a == 2) {

		cout << endl;

		cout << "Enter Length: ";
		cin >> m;

		cout << endl;

		f = m * 3.28;

		cout << m << " meters is " << f << " feet." << endl;

		cout << endl;
	}
	if(a > 2){
		cout << endl;
		cout << "Error \a";
		cout << endl;
		cout << endl;
	}
	if(a < 0){
		cout << endl;
		cout << "Error \a";
		cout << endl;
		cout << endl;
	}
	}
return 0;

}