# Differenza tra estremi

Scrivere un programma C++ che prende in ingresso un numero intero pari e positivo N (fare i dovuti controlli).
Prendere in input N numeri, compresi tra 1 e 10 e salvarli in un array.
Stampare in input il primo array e stampare un secondo array composto dalla sottrazione dei due estremi e scalare
progrssivamente, tra il valore maggiore ed il minore.
## Esempio
[ 2, 5, 8, 10, 4, 6] in output avremo [4, 1, 2]

## Soluzione
```
#include<iostream>
using namespace std;

int main(){
	int numero; //numero intero e positivo
	int DIM = 100; // dimensione massima del nostro array
	int array[DIM]; // array di numeri interi compresi tra 1 e 10
	int array2[DIM]; // array contenente le differenze
	int estremo_minore;
	int estremo_maggiore;

	do{
		cout<<"Inserisci un numero pari e positivo: ";
		cin>>numero;

		if(numero % 2 != 0){
			cout<<"Attenzione il numero inserito non e' pari"<<endl;
			cout<<"Prego inserire un altro numero"<<endl;
		}
	}
	while(numero % 2 != 0);

	for(int i = 0; i < numero; i++){
		do{
			cout<<"Inserisci un elemento " << "(" << i + 1 <<") :";
			cin>>array[i];
			
			if(array[i] < 1 || array[i] > 10){
				cout<<"Errore! Il numero inserito e' valido"<<endl;
			}
		}
		while(array[i] < 1 || array[i] > 10);
	}

	// stampa array

	cout<<"STAMPA VETTORE"<<endl;

	for ( int i = 0; i < numero; i++){
		cout<<"("<<i+1<<") -> "<<array[i]<<endl;	
	}

	estremo_minore = 0;
	estremo_maggiore = numero - 1;

	// Inizializzazione secondo array

	for(int i = 0; i < numero / 2; i++){
		if(array[estremo_minore] > array[estremo_maggiore]){
			array2[i] = array[estremo_minore] - array[estremo_maggiore];
		}
		if(array[estremo_minore] < array[estremo_maggiore]){
			array2[i] = array[estremo_maggiore] - array[estremo_minore];
		}

		estremo_minore++;
		estremo_maggiore--;
	}

	// stampa array differenze
	cout<<"STAMPA VETTORE DIFFERENZE"<<endl;
	
		for ( int i = 0; i < numero / 2; i++){
			cout<<"("<<i+1<<") -> "<<array2[i]<<endl;	
		}
	
	return 0;
}
```
