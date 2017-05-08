#include <stdio.h>

int main () {
  double numero;
  printf("Inserisci un numero in virgola mobile  ");
  scanf("%lf", &numero);

  int numero_i = (int)numero;
  printf("Il numero intero e' %d\n", numero_i);
  printf("Invece il numero con la virgola era %lf\n", numero);

  return 0;
}
  


