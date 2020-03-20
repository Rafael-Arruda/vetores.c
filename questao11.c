#include <stdio.h>

int main(){

  int vetor[10];
  int contP,contN = 0;

  printf("Digite 10 valores para o vetor: \n");

  for(int i=0;i<10;i++){
    scanf("%i",&vetor[i]);
    if(vetor[i] < 0){
      contN ++;
    }else{
      contP ++;
    }
  }
  printf("Vetor [ ");
  for (int j = 0;j<10;j++){
    printf("%i ",vetor[j]);
  }
  printf("]\n");
  printf("QTD de negativos: %i\nQTD de positivos: %i\n",contN,contP);
  return 0;
}

