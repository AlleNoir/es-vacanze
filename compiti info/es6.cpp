#include <iostream>
using namespace std;

int posmag = 0;
int mag = 0;
int c= 0;
int cont=0;
float media = 0;
int som = 0;
int pos=100;
int a=0;
int main(){
	int v[20];
	for(int i=0; i < 20; i++){
		cout << "inserisci numero ";
		cin >> a;
		v[i]=a;
	}
	cout << "stampo i numeri pari:\n";
	for(int i=0; i < 20; i++){
		if (v[i]%2 == 0){
			cout << v[i] << "\n";
		}
	}
	cout << "stampo i numeri in posizione pari\n";
	for(int i=0; i < 20; i++){
		if (i%2 == 0){
			cout << v[i] << "\n";
		}
	}
	for(int i=0; i < 20; i++){
		if (v[i]%2 == 0){
			v[i] = v[i] + 1;
		}
		else{
			v[i]= v[i] - 1;
		}
	}
	
	cout << "stampo il nuovo vettore ottenuto sommando 1 ai numeri pari e sottraendo 1 ai numeri dispari\n";
	for(int i=0; i < 20; i++){
		cout << v[i] << "\n";
	}
	
	while (pos > 19){
	cout << "inserire posizione < da 0 a 19";
	cin >> pos;
	}
	cout << "il numero presente in quella posizione del vettore è " << v[pos] << "\n";


	
	for(int i=0; i < 20; i++){
		som=som+v[i];
	}
	media = som / 20;
	for(int i=0; i < 20; i++){
		if (v[i]>media){
			cont = cont+1;
		}
	}
	cout << "i valori superiori alla media sono " << cont << "\n";
	
	c = v[19];
	v[19] = v[0];
	v[0] = c;	
	
	for(int i=0; i < 20; i++){
		if(v[i]>mag){
			mag = v[i];
			posmag = i;
		}
}
	cout << "il numero maggiore è " << mag << "e occupa la posizione n " << posmag;
}



