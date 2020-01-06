#include <iostream>
using namespace std;
int y = 1;
int main(){
	int x;
	int n;
	int s;
	int r;

	
	while (y == 1){
		cout << "scegli operazione:\n1)calcolo fattoriale di un numero intero positivo\n2)calcolo potenza N-esima di un numero intero positivo\n3)chiudi programma\n";
		cin >> s;
		if (s == 1){
			cout << "inserire numero\n";
			cin >> x;
			if (x < 0){
			x = -x;
			}
			for (int i = x-1; i > 0; i = i - 1){
				x = x * i;
			}
			cout << "il fattoriale è " << x << "\n";
		}
		else if (s == 2){
			cout << "inserire numero\n";
			cin >> x;
			if (x < 0){
				x = -x;
			}
			
			r = x;
			cout << "inserire la potenza n a cui si desidera elevare il numero\n";
			cin >> n;
			for (int l = 1; l < n;l = l + 1){
				r = r * x;
			}
			cout << "il risultato della potenza è " << r << "\n";
		}
		else if (s == 3){
			y = y + 4;
		}
	}	
}


