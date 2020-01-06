#include <iostream>
using namespace std;

int ins(int n);
int calc1(int x);
int calc2(int y,int z);
float rapp(float a,float b);

float risfinale=0;
float ris2=0;
float ris1=0;
int x;
int y;
int main(){
	int x = ins(x);
    int y = ins(y);
	float ris1 = calc1(x);
	float ris2 = calc2(y,3);
	float risfinale = rapp(ris1,ris2);
	cout << "il risultato finale è " << risfinale;
}
















float rapp(float a,float b){
	float v = a/b;
	return v;
}



int calc2(int y,int z){
	for (int l = 1; l < y;l = l + 1){
		z = z * 3;
	}
	return z;
}


int calc1(int p){
	int i = 1;
	int r=1;
	for (i=1;i<p+1;i=i+1){
		r=r*i;
	}
	return r;
}

int ins(int n){
	cout << "inserire valore intero positivo, se lo inserisci negativo il numero verrà reso positivo automaticamente\n";
	cin >> n;
	if (n<0){
		n = -n;
	}
	return n;
}

