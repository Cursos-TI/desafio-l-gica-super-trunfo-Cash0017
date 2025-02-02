#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  
  
  int numerosecreto, palpite;
  int opcao, regras;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

switch (opcao)
{
case 1:
    srand(time(0));
    numerosecreto = rand() % 20;
    printf("digite um numero de 0 a 19: ");
    scanf("%d", &palpite);
    if(numerosecreto == palpite){
        printf("voce acertou \n");
        printf("numero secreto era: %d\n", numerosecreto);
    }else{
        printf("voce errou \n");
        printf("numero secreto era: %d\n", numerosecreto);
    }
    break;

case 2:
     printf("quais regras quer saber? \n");
     printf("digite o numero da regra 1 ou 2: ");
     scanf("%d", &regras);
     switch (regras)
     {
 case 1:
    printf("regra 1 \n");
    break;
case 2:
     printf("regra 2 \n");
     break;
default:
printf("não esxite essa regra \n");
    break;
     }
    break;
case 3:
    printf("saindo do jogo... \n");
    break;
default:
   printf("opção invalida \n"); 
    break;
}








return 0;
}