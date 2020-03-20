#include <stdio.h>

int main(){

  int vetor[7];
  printf("Digite 7 valores para o vetor: \n");
  for(int i = 0;i<7;i++){
    scanf("%i",&vetor[i]);
  }
  printf("Vetor A [ ");
  for ( int i=0; i<7;i++){
    printf("%i ",vetor[i]);
  }
  printf("]\n");

  printf("Vetor A invertido [ ");
  for ( int i=0; i<7;i++){
    printf("%i ",vetor[6-i]);
  }
  printf("]\n");
  return 0 ;
}
