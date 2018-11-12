#include "coin.h"
#include "random.h"
#include <stdio.h>

int simulation(){
  int i, c, head = 0;
  
    for (i = 0; i < 100; i++){
      c = launch();
      if (c == 1) head++;
    }
    return head;
}

int main(){
  int head = 0, tail;
  random_init();
  head = simulation();
  tail = 100 - head;
  printf ("%d Head and %d Tail.\n", head, tail);
  return 0;
}
