#include "random.h" 
#include "coin.h"

int c_init()
{
  random_init();
}

int c_flip()
{
  return random_between(0,2);
}

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

