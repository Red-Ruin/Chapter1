#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int num;
	int result;

	cout << "Enter a number: " << endl;
	cin >> num;

	result = abs(num);

	cout << result << " the absolute value of " << num << " is: " << endl;

}