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


