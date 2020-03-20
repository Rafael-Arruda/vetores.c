#include <stdio.h>

int main(){

  int vetorA[20];
  int vetorB[20];

  printf("Digite 20 valores para o vetor A:\n");
  for (int i=0;i<20;i++){
    scanf("%i",&vetorA[i]);
    vetorB[19-i] = vetorA[i];
  }
  
  printf("Vetor A [ ");
  for (int b = 0;b<20;b++){
    printf("%i ",vetorA[b]);
  }
  printf("]\n");

  printf("Vetor B [ ");
  for (int b = 0;b<20;b++){
    printf("%i ",vetorB[b]);
  }
  printf("]\n");

  return 0;
}
