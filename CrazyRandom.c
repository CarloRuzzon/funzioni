#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int crazy_random()
{
  static int counterfunction = 0;
  int random = 0;

  if(counterfunction < 3){ 
    random = (1 + rand() % 5) * 2;
  }
  else{
    if (counterfunction == 3) printf("Da ora in poi la funzione estrarra' solo numeri dispari.\n");
    random = 1 + (1 + rand() % 4) * 2;
  }
  counterfunction++;
  return random;
}




int main(){
  int counter;
  printf("Estrae tre numeri pari:\n");
  srand(time(NULL));
  for (counter = 0; counter < 6; counter ++){
    printf("%d\n", crazy_random());
  }
    

    
  return 0;
}
