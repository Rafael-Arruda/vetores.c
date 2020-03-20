#include <stdio.h>

int main(){

  float vetorA[5];
  float vetorB[6];
  float vetorC[11];

  printf("Digite 5 valores para o vetor A\n");
  for ( int i = 0;i<5;i++){
    scanf("%f",&vetorA[i]);
    vetorC[i] = vetorA[i];
  }
  printf("Digite 6 valores para o vetor B\n");
  for ( int i = 0;i<6;i++){
    scanf("%f",&vetorB[i]);
    vetorC[5+i] = vetorB[i];
  }
  printf("Vetor C [ ");
  for( int i = 0;i<11;i++){
    printf("%.2f ",vetorC[i]);
  }
  printf("]\n");
  return 0 ;
}
