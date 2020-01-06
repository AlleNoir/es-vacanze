#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int r;
	cout << "inserire primo valore\n";
	cin >> a;
	cout << "inserire secondo valore\n";
	cin >> b;
	if (a < 0){
		a = -a;
	}
	if (b < 0){
		b = -b;
	}
	if (b%a == 0){
		cout << b << " è multiplo di " << a;
	}
	else{
		cout << b << " non è multiplo di " << a;
	}
}
