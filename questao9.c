#include <stdio.h>

int main(){

  float vetorA[20];
  float vetorB[20];
  
  printf("Digite 20 temperaturas:\n");
  for (int i=0;i<20;i++){
    scanf("%f", &vetorA[i]);
    vetorB[i] =( vetorA[i] * 1.8 ) +32; 
  }
  printf("Vetor A [ ");
  for ( int j=0;j<20;j++){
    printf("%.2f ",vetorA[j]);
  }
  printf("]\n");

  printf("Vetor B [ ");
  for (int i = 0 ;i< 20;i++){
    printf("%.2f ",vetorB[i]);
  }
  printf("]\n");

  return 0;
}

