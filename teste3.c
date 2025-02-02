#include <stdio.h>

int main(){

  int idade;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);
  
  if(idade <= 18 || idade >= 60){
    if(renda < 2.000){
        printf("voce esta qualificado para promoção \n");
    }else{
        printf("voce não esta qualificado devido sua renda \n");
    }
  }else{
    printf("voce não esta qualificado devido sua idade \n");
  }



return 0;
}
