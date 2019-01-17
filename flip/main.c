#include "coin.h"
#include <stdio.h>


int main(){
  int trials = 100;
  int head;
  c_init();

  head = c_trials(trials);
  printf ("%d Head and %d Tail.\n", head, 100 - head);
  return 0;
}
