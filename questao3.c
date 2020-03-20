#include <stdio.h>

int main(){

  int vetorA[15];
  int vetorB[15];

  printf("Digite 15 valores para o vetor A:\n");
  for (int i=0;i<15;i++){
    scanf("%i",&vetorA[i]);
    vetorB[i] = vetorA[i] * vetorA[i];
  }

  printf("Vetor A [");
  for (int j=0;j<15;j++){
    printf("%i ",vetorA[j]);
  }
  printf("]\n");
  
  printf("Vetor B [ ");
  for (int i=0;i<15;i++){
    printf("%i ",vetorB[i]);
  }
  printf("]\n");
  return 0;
}
