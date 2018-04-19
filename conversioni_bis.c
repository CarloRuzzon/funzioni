#include<stdio.h>

void menu();
void converti(int num, int base);

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
      converti(num, 2);
      break;
    
    case 2:
      converti(num, 8);
      break;
    
    case 3:
      converti(num, 16);
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

void converti(int num, int base){
  int i, bit_da_stampare, num_conv, peso;
  
  if(base == 2){
    bit_da_stampare = 8;
    peso = 128;
  }
  
  else if(base == 8){
    bit_da_stampare = 3;
    peso = 64;
  }
  
  else{
    bit_da_stampare = 2;
    peso = 16;
  }
  
  for(i = 0; i < bit_da_stampare; i++){
    num_conv = num / peso;
    printf("%x", num_conv);
    num -= peso * num_conv;
    peso /= base;
  }

}
