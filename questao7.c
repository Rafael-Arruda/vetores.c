#include <stdio.h>

int main(){

  float vetorA[10];
  float vetorB[10];

  printf("Digite 10 valores para o vetor A:\n");
  for (int i=0;i<10;i++){
    scanf("%f",&vetorA[i]);
    vetorB[i] = vetorA[i]/2.0;
  }
  
  printf("Vetor A [ ");
  for (int b = 0;b<10;b++){
    printf("%.2f ",vetorA[b]);
  }
  printf("]\n");

  printf("Vetor B [ ");
  for (int b = 0;b<10;b++){
    printf("%.2f ",vetorB[b]);
  }
  printf("]\n");

  return 0;
}
