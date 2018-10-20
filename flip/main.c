#include "coin.h"
#include "random.h"
#include <stdio.h>


int main(){
  int head = 0, tail;
  random_init();
  head = simulation();
  tail = 100 - head;
  printf ("%d Head and %d Tail.\n", head, tail);
  return 0;
}
