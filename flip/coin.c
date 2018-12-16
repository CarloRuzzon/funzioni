#include "random.h" 
#include "coin.h"

int c_init()
{
  random_init();
}

int c_between()
{
  return random_between(0,2);
}

int c_sim()
{
  int i;
  int head = 0;
  for(i = 0; i < 100; i++){
    if(c_between() == 0)
      head++;
  }
  return head;
}

