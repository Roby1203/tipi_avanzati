#include <stdio.h>

int main (){
  int numeri[3];
  int somma;
  int media;

  printf("Inserisci tre valori interi \n");
  scanf("%d",&numeri[0]);
  printf("  \n");
  scanf("%d",&numeri[1]);
  printf("  \n");
  scanf("%d",&numeri[2]);
  printf("  \n");


  somma = numeri[0] + numeri[1] + numeri[2];
  media = somma / 3;

  printf("la somma e' %d\n", somma);
  printf("la media e' %d\n", media);

  return 0;
}
