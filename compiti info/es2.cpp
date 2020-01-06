#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	string s;
	double r;
	cout << "inserire primo valore\n";
	cin >> a;
	cout << "inserire secondo valore\n";
	cin >> b;
	cout << "inserisci operatore (+, - , *, /)";
	cin >> s;
	if (a<0){
		a = a * -1;
	}
	if (b<0){
		b = b * -1;
	}
	if (s == "*"){
		r = a*b;
	}
	else if (s == "/"){
		r = a/b;
	}
	else if (s == "+"){
		r = a+b;
	}
	else if (s == "-"){
		r = a-b;
	}
	cout << "il risultato è " << r;
	
}
