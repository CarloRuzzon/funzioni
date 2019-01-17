#include "random.h"
#include "dado.h"

int dado_init(){
  random_init();
}
int dado_flip(){
  return random_between(0,6);
}
