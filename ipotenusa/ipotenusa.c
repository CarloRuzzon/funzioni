#include <stdio.h>
#include <math.h>

double calcolo_ipo(int lato1, int lato2);

int main(){

  printf("Triangolo   Lato1   Lato2   Ipotenusa\n");
  printf("%9d %7.1f %7.1f %11.1f\n", 1, 3., 5., calcolo_ipo(3., 5.) );
  printf("%9d %7.1f %7.1f %11.1f\n", 2, 5., 12., calcolo_ipo(5., 12.) );
  printf("%9d %7.1f %7.1f %11.1f\n", 3, 8., 15., calcolo_ipo(8., 15.) );
    
  return 0;
}

double calcolo_ipo(int lato1, int lato2){
  return sqrt(lato1 * lato1 + lato2 * lato2);
}
