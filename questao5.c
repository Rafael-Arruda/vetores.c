#include <stdio.h>

int main(){

  int vetorA[15];
  int vetorB[15];
  int vetorC[30];

  printf("Digite 15 valores para o vetor A:\n");
  for (int i=0;i<15;i++){
    scanf("%i",&vetorA[i]);
    vetorC[i] = vetorA[i];
  }
  printf("Digite 15 valores para o vetor B:\n");
  for (int j = 0;j<15;j++){
    scanf("%i",&vetorB[j]);
    vetorC[15+j] = vetorB[j];
  }
  printf("Vetor C [ ");
  for (int b = 0;b<30;b++){
    printf("%i ",vetorC[b]);
  }
  printf("]\n");
  return 0;
}
