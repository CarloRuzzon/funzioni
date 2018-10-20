#include "random.h" 
#include "coin.h"

int launch()
{
  return random_between(1, 3);
}

int simulation()
{
  int i, c, head = 0;
  
  for (i = 0; i < 100; i++){
    c = launch();
    if (c == 1) head++;
  }
  return head;
}

