#include <iostream>
using namespace std;

int main(){

	int int1;
	int int2;
	int int3;

	cout << "Please enter a whole number. \t";
	cout << endl;
	cin >> int1;

	cout << "Please enter a different whole number. \t";
	cout << endl;
	cin >> int2;

	cout << "Please enter a different whole number. \t";
	cout << endl;
	cin >> int3;

	cout << endl;

	cout << "The sum: " << int1 + int2 + int3;
	cout << endl;

	cout << "The Average: " << (int1 + int2 + int3) / 3;
	cout << endl;

	if(int1 < int2){
		if(int1 < int3){
			cout << "The smallest number is: " << int1;
			cout << endl;
		}
	}
	if(int2 < int1){
		if(int2 < int3){
			cout << "The smallest number is: " << int2;
			cout << endl;
		}
	}
	if(int3 < int2){
		if(int3 < int1){
			cout << "The smallest number is: " << int3;
			cout << endl;
		}
	}
	if(int1 > int2){
		if(int1 > int3){
			cout << "The greatest number is: " << int1;
			cout << endl;
		}
	}
	if(int2 > int1){
		if(int2 > int3){
			cout << "The greatest number is: " << int2;
			cout << endl;
		}
	}
	if(int3 > int1){
		if(int3 > int2){
			cout << "The greatest number is: " << int3;
			cout << endl;
		}
	}
	return 0;
}