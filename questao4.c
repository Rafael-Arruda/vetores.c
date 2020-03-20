#include <stdio.h>

int main(){

  int vetorA[15];
  int vetorB[15];

  printf("Digite 15 valores para o vetor A:\n");
  for (int i=0;i<15;i++){
    int fat = 1 ; 
    scanf("%i",&vetorA[i]);
    for (int j = vetorA[i]; j>1;j--){
      fat = fat * j;
    }
    vetorB[i] = fat;
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
