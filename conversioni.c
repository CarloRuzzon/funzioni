#include<stdio.h>

void menu();
void converti_in_binario(int num);
void converti_in_ottale(int num);
void converti_in_esadecimale(int num);


int main(){
  int num, scelta;
  do{
    printf("Inserisci il numero da convertire:");
    scanf("%d", &num);
  }while(num < 0 || num > 255);

  do{
    menu();
    scanf("%d", &scelta);
  }while(scelta < 1 || scelta > 3);
  
  switch(scelta){
    
    case 1:
      converti_in_binario(num);
      break;
    
    case 2:
      converti_in_ottale(num);
      break;
    
    case 3:
      converti_in_esadecimale(num);
      break;
    
    default:
      break;
  }
  printf("\n");

  return 0;
}

void menu(){
  printf("Scegli la base:\n1) Binario\n2) Ottale\n3) Esadecimale\n");
}


void converti_in_binario(int num){
  int pot = 128, bit, i = 0;
  for(i = 0; i < 8; i++){
    bit = num / pot;
    printf("%d", bit);
    num -= bit * pot;
    pot /= 2;
  }
}

void converti_in_ottale(int num){
  int pot = 64, oct, i;
  for(i = 0; i < 3; i++){
    oct = num / pot;
    printf("%d", oct);
    num -= oct * pot;
    pot /= 8;
  }
}

void converti_in_esadecimale(int num){
  int pot = 16, hex, i;
  for(i = 0; i < 2; i++){
    hex = num / pot;
    printf("%x", hex);
    num -= hex * pot;
    pot /= 16;
  }
}
