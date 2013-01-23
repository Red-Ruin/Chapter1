#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	int smal;
	int lar;

	cout << "Enter a integer: ";
	cin >> a;
	cout << endl;

	cout << "Enter a different integer: ";
	cin >> b;
	cout << endl;

	cout << "Enter a different integer: ";
	cin >> c;
	cout << endl;

	cout << "Enter a different integer: ";
	cin >> d;
	cout << endl;

	cout << "Enter a different integer: ";
	cin >> e;
	cout << endl;

	if(a > b){
		if(a > c){
			if(a > d){
				if (a > e){
					lar = a;
					cout << "The largest number is: " << lar;
					cout << endl;
				}
			}
		}
	}
	if(b > a){
		if(b > c){
			if(b > d){
				if (b > e){
					lar = b;
					cout << "The largest number is: " << lar;
					cout << endl;
				}
			}
		}
	}
	if(c > b){
		if(c > a){
			if(c > d){
				if (c > e){
					lar = c;
					cout << "The largest number is: " << lar;
					cout << endl;
				}
			}
		}
	}
	if(d > b){
		if(d > c){
			if(d > a){
				if (d > e){
					lar = d;
					cout << "The largest number is: " << lar;
					cout << endl;
				}
			}
		}
	}
	if(e > b){
		if(e > c){
			if(e > d){
				if (e > a){
					lar = e;
					cout << "The largest number is: " << lar;
					cout << endl;
				}
			}
		}
	}
	if(a < b){
		if(a < c){
			if(a < d){
				if (a < e){
					smal = a;
					cout << "The smallest number is: " << smal;
					cout << endl;
				}
			}
		}
	}
	if(b < a){
		if(b < c){
			if(b < d){
				if (b < e){
					smal = b;
					cout << "The smallest number is: " << smal;
					cout << endl;
				}
			}
		}
	}
	if(c < b){
		if(c < a){
			if(c < d){
				if (c < e){
					smal = c;
					cout << "The smallest number is: " << smal;
					cout << endl;
				}
			}
		}
	}
	if(d < b){
		if(d < c){
			if(d < a){
				if (d < e){
					smal = d;
					cout << "The smallest number is: " << smal;
					cout << endl;
				}
			}
		}
	}
	if(e < b){
		if(e < c){
			if(e < d){
				if (e < a){
					smal = e;
					cout << "The smallest number is: " << smal;
					cout << endl;
				}
			}
		}
	}
	return 0;
	}