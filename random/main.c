#include<stdio.h>
#include "random.h"

void repeat(int min, int max)
{
  int i;
  printf("5 numeri compresi tra %d e %d\n", min, max);
  for(i = 0; i < 5; i++)
  {
    printf("%d\n",random_between(min,max) );
  }
}

int main(){
  random_init();
  repeat(1, 1);
  repeat(1, 2);
  repeat(1, 3);
  repeat(100, 150);
  return 0;
}

  

