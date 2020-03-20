#include <stdio.h>

int main(){

  float vetorA[20];
  float soma = 0;

  printf("Digite 20 temperaturas:\n");
  for (int i=0;i<20;i++){
    scanf("%f", &vetorA[i]);
    soma += vetorA[i];
  }
  
  float maior,menor = vetorA[0];
  float media = soma/20;

  for (int j=0;j<20;j++){
    if(vetorA[j] > maior){
      maior = vetorA[j];
    }
    if(vetorA[j] < menor){
      menor = vetorA[j];
    }
  }
  printf("Maior temp: %.2f\nMenor tem: %.2f\nMédia: %.2f\n",maior,menor,media);

  return 0;
}
