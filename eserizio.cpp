/* Esercizio 1 - Determinare se un numero intero e positivo inserito dall'utente è primo */

#include<iostream> // direttiva al preprocessore 
using namespace std; // utilizzo il namespace std

int main(){
  int num; // numero intero positivo
  int contaDivisori = 0; // contatore dei divisori

  do // ciclo per l'inserimento del numero da parte dell'utente
  {
    cout << "Inserisci un numero intero positivo: ";
    cin >> num;
    
    if(num < 0){
      cout << "ERRORE! Il numero inserito e' negativo, prego inserire un altro numero" <<endl;
    }

  } while (num < 0);
  
  cout << "Il numero inserito e': ";
  cout << num <<endl;

  for(int i = 1; i <= num; i++){ // ciclo for per il conteggio dei divisori
    if(num % i == 0){
      contaDivisori++;
    }
  }

  if(contaDivisori == 2){
    cout << "il numero inserito e' primo" << endl;
  }
  else{
    cout << "Il numero inserito non e' primo" << endl;
  }

  return 0;
};
