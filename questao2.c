#include <stdio.h>

int main(){

  int vetorA[20];
  int vetorB[20];
  int vetorC[20];

  printf("Digite 20 valores para o vetor A:\n");
  for (int i=0;i<20;i++){
    scanf("%i",&vetorA[i]);
  }

  printf("Digite 20 valores para o vetor B: \n");
  for (int j=0;j<20;j++){
    scanf("%i",&vetorB[j]);
  }
  printf("Vetor C [ ");
  for (int i=0;i<20;i++){
    vetorC[i] = vetorA[i] + vetorB[i];
    printf("%i ",vetorC[i]);
  }
  printf("]\n");
  return 0;
}
