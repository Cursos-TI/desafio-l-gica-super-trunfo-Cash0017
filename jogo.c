#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int numerojogador, numerocomputador, resultado;
char tipocomparacao;

srand(time(0));

numerocomputador = rand() % 100 + 1;



printf("bem vindo ao jogo maior, menor ou igual.");
printf("voce deve escolher o numero e o tipo de comparação \n");
printf("M. maior \n");
printf("N. menor \n");
printf("I. igual \n");

printf("escolha a comparação: ");
scanf("%c", &tipocomparacao);

printf("digite um numero (entre 1 a 100): \n");
scanf("%d", &numerojogador);

//printf("o numero do computador é: %d\n", numerocomputador);



switch (tipocomparacao)
{
case 'M':
case 'm':
   printf("voce escolheu a opção maior \n");
    resultado = numerojogador > numerocomputador ? 1 : 0;
  
    break;
case 'N':
case 'n':
    printf("voce escolheu a opção menor \n");
    resultado = numerojogador < numerocomputador ? 1 : 0;
  
    break;
case 'I':
case 'i': 
    printf("voce escolheu a opção igual \n");
    resultado = numerojogador == numerocomputador ? 1 : 0;
 
    break;

default:
printf("opção invalida \n");
    break;
}

printf("o numero do computador é: %d e o numero do jogador é: %d\n", numerocomputador, numerojogador);

if(resultado == 1){
    printf("voce venceu \n");
    }else{
        printf("voce perdeu \n");
    }


    return 0;
}