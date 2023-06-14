#include <stdio.h>
#include <time.h>

int main(void) {

  system ("clear");

  int NUM, I, NJ, NS;
  int v[6];

  srand (time(0));

  printf("entre com o numero de jogadas: ");
  scanf("%d",&NJ);

  for (I = 0; I < 6; I++)
    v[I] = 0;

  for (I = 0; I < NJ; I++) {
    NS = rand() % 6;
    v[NS] = v[NS] +1;
  }
  for (I = 0; I < 6; I++){
    NS = printf("%d:%4d\n",I + 1, v[I]);
  }
  
  return 0;
  
}