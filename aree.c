#include<stdio.h>

double area_quadrato(double lato);
double area_cerchio(double raggio);

int main(){
  double lato, raggio, area_l, area_c;
  int scelta;
  
  do{
    printf("Scegli la figura geometrica:\n1) Quadrato\n2) Cerchio\n");
    scanf("%d", &scelta);
  }while(scelta < 1 || scelta > 2);
  
  switch(scelta){
    
    case 1:
      printf("Inserire il lato del quadrato: ");
      scanf("%lf", &lato);
      area_l = area_quadrato(lato);
      printf("L'area del lato e': %.2f\n", area_l);
      break;
    
    case 2:
      printf("Inserire il raggio del cerchio: ");
      scanf("%lf", &raggio);
      area_c = area_cerchio(raggio);
      printf("L'area del cerchio e': %.2f\n", area_c);
      break;

    default:
      break;
  }
}

double area_quadrato(double lato){
  lato *= lato;
  return lato;
}

double area_cerchio(double raggio){
  raggio *= raggio * 3.14;
  return raggio;
}
