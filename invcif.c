/*Programma che inverte le cifre di un numero dato*/
#include<stdio.h>

int inverticifre(int num);

int main(){
  int num;
  int n;
  
  printf("Inverti cifre\n\n");
  printf("Inserisci un numero: ");
  scanf("%d", &num);
  printf("A cifre invertite: %d\n", inverticifre(num) );

  return 0;
}

int inverticifre(int num){
  int cifra;
  int risultato = 0;
  while(num > 0){
    cifra = num % 10;
    num /= 10;
    risultato = risultato * 10 + cifra ;
  }
  return risultato;
}
