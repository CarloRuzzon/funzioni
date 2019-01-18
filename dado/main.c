#include "dado.h"
#include <stdio.h>

void dado_istogram(int ast){
	int i;
	for(i = 0; i < ast; i++){
		printf("*");
	}
	printf("\n");
}

void dado_print(int vett[]){
	int i;
	int face = 6;
	for(i = 0; i < face; i++){
		printf("#%d) [%d]", i +1, vett[i]);
		dado_istogram(vett[i]);
	}
}


int dado_trials (int trials){
  int i, a;
  int vett[6] = {0};
  for(i = 0; i < trials; i++){
    a = dado_flip();
    vett[a - 1]++;
  }
  dado_print(vett);
 }



int main(){
  int trials = 100;
  dado_trials(trials);
  return 0;
}
