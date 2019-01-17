#include "coin.h"
#include <stdio.h>

int c_trials(int trials)
{
  int i;
  int head = 0;
  for(i = 0; i < trials; i++){
    if(c_flip() == 0)
      head++;
  }
  return head;
}


int main(){
  int trials = 100;
  int head;
  c_init();

  head = c_trials(trials);
  printf ("%d Head and %d Tail.\n", head, trials - head);
  return 0;
}
