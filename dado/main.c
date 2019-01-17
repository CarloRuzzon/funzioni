#include "dado.h"
#include<stdio.h>

int dado_trials (int trials){
  int i, a;
  int vett[6] = {0};
  for(i = 0; i < trials; i++){
    a = dado_flip();
    vett[a]++;
  }
  for(i = 0; i < 6; i++){
    printf("#%d)  [%d] ", i+1, vett[i]);
    for(a = 0; a < vett[i]; a++){
      printf("*");
  }
  printf("\n");
}
}

int main(){
  int trials = 100;
  dado_trials(trials);
  return 0;
}
