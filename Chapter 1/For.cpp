#include <iostream>
using namespace std;

int main(){
	int age;
	int legal;

	cout << "Please enter your age.";
	cin >> age;

	if(age >= 18){
		cout << "Congratulations! You are able to vote!.";
	}
	if(age < 18){
		cout << "GTFO poser! >:C";
	}
	system("PAUSE");
	return 0;
}