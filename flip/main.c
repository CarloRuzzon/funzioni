#include "coin.h"
#include "random.h"
#include <stdio.h>


int main(){
  int head;
  c_init();

  head = c_sim();
  printf ("%d Head and %d Tail.\n", head, 100 - head);
  return 0;
}
