#include <stdio.h>

int main(){

  int vetor[10];
  printf("Digite 10 valores:\n");
  for (int i=0;i<10;i++){
    scanf("%i",&vetor[i]);
  }
  printf("Vetor [ ");
  for (int j=0;j<10;j++){
    printf("%i ",vetor[j]);
  }
  printf("]\n");
  return 0;
}
