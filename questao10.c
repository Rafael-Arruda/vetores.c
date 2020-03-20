#include <stdio.h>

int main(){

  int vetorA[12];
  int vetorB[12];

  printf("Digite 12 elementos para o vetorA: \n");
  for (int i = 0;i < 12;i++){
    scanf("%i",&vetorA[i]);
    if(vetorA[i]%2 == 0){
      vetorB[i] = vetorA[i];
    }else{
      vetorB[i] = vetorA[i] * 2;
    }
  }
  printf("Vetor A [ ");
  for (int j=0;j<12;j++){
    printf("%i ",vetorA[j]);
  }
  printf("]\n");

  printf("Vetor B [ ");
  for (int j=0;j<12;j++){
    printf("%i ",vetorB[j]);
  }
  printf("]\n");
    
  return 0;
}


