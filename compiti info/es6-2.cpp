#include <iostream>
using namespace std;
void ins(int ve[]);
void sta1(int ve[]);
void sta2(int ve[]);
void agg(int ve[]);
void med(int ve[]);
void pos(int ve[]);
void sca(int ve[]);
void mag(int ve[]);
int v[20];

int main(){
	
	ins(v);
	sta1(v);
	sta2(v);
	agg(v);
	pos(v);
	med(v);
	sca(v);
	mag(v);
}






void ins(int ve[]){
	int a;
	int i = 0;
	for(int i=0; i < 20; i++){
		cout << "inserisci numero ";
		cin >> a;
		ve[i]=a;
	}
}
void sta1(int ve[]){
	int i = 0;
	cout << "stampo i numeri pari:\n";
	for(int i=0; i < 20; i++){
		if (ve[i]%2 == 0){
			cout << ve[i] << "\n";
		}
	}
}
void sta2(int ve[]){
	int i = 0;
	cout << "stampo i numeri in posizione pari\n";
	for(int i=0; i < 20; i++){
		if (i%2 == 0){
			cout << ve[i] << "\n";
		}
	}
}
void agg(int ve[]){
	int i = 0;
	for(int i=0; i < 20; i++){
		if (ve[i]%2 == 0){
			ve[i] = ve[i] + 1;
		}
		else{
			ve[i]= ve[i] - 1;
		}
	}
	
	cout << "stampo il nuovo vettore ottenuto sommando 1 ai numeri pari e sottraendo 1 ai numeri dispari\n";
	for(int i=0; i < 20; i++){
		cout << ve[i] << "\n";
	}
	
}

void pos(int ve[]){
	int p = 100;
	while (p > 19){
	cout << "inserire posizione da 0 a 19";
	cin >> p;
	}
	cout << "il numero presente in quella posizione del vettore è " << ve[p] << "\n";
}

void med(int ve[]){
	int i = 0;
	int som=0;
	int cont = 0;
	float media = 0;
	for(int i=0; i< 20; i++){
		som=som+ve[i];	}
	media = som / 20;
	for(int i=0; i < 20; i++){
		if (ve[i]>media){
			cont = cont+1;
		}
	}
	cout << "i valori superiori alla media sono " << cont << "\n";
}

void sca(int ve[]){
	int c;
	c = v[19];
	v[19] = v[0];
	v[0] = c;
}

void mag(int ve[]){
	int mag = 0;
	int posmag = 0;
	for(int i=0; i < 20; i++){
		if(v[i]>mag){
			mag = v[i];
			posmag = i;
		}
}
	cout << "il numero maggiore è " << mag << " e occupa la posizione numero " << posmag;
}
