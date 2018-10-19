#include "random.h"
#include <stdlib.h>
#include <time.h>

void random_init(){
  srand( time(NULL) );
}

int random_between(int min, int max){
  if (max <= min) return min;
  return min + rand() % (max - min);
}

