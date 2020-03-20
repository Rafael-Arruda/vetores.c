#include <stdio.h>

int main(){

  float vetor[10];
  printf("Digite 10 valores para o vetor: \n");
  for(int i = 0;i<10;i++){
    scanf("%f",&vetor[i]);
  }
  float maior = vetor[0];
  int pos = 0;
  for (int j=0;j<10;j++){
    if(vetor[j] > maior){
      maior = vetor[j];
      pos = j;
    }
  }
  
  printf("Maior valor: %.2f\nPosição: %i",maior,pos);
  return 0;
}

