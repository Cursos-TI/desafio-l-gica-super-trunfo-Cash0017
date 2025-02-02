#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: ");
  scanf("%d", &dependentes);

if (idade >= 18 && idade <= 65){
    if(renda < 3.000){
      if(dependentes > 2){
       printf("voce atende a todos os requisitos \n");
}else{
    printf("seu numero de dependentes não é adquado \n");
}

}else{
    printf("sua renda não é adquada \n");
}
}else{
    printf("voce não tem a idade adequada \n");
}






}