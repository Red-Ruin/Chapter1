#include <iostream>
using namespace std;
int main(){
	int n;
	double input;
	double output;
	n = 1;

	while(n > 0){

		cout << "Enter number of Jovian years: ";
		cin >> input;
		cout << endl;

		output = input * 11.86;

		cout << input << " number of Jovian years equals " << output << " Earth years.\n" << endl;
	}
	return 0;
}
