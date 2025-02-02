#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int escolhajogador, escolhacomputador;
srand(time(0));

printf("jogo jokenpo \n");
printf("escolha as opções \n");
printf("1. pedra \n");
printf("2. papel \n");
printf("3. tesoura \n");
printf("escolha: ");
scanf("%d", &escolhajogador);

escolhacomputador = rand() % 3 + 1;

switch (escolhajogador)
{
case 1:
    printf("voce escolheu: pedra \n");
    break;
case 2:
    printf("voce escolheu: papel \n");
    break;
case 3:
    printf("voce escolheu: tesoura \n");
    break;
default:
printf("opção invalida \n");
    break;
}
switch (escolhacomputador)
{
case 1:
    printf("computador escolheu: pedra \n");
    break;
case 2:
    printf("computador escolheu: papel \n");
    break;
case 3:
    printf("computador escolheu: tesoura \n");
    break;
}

if(escolhacomputador == escolhajogador){
    printf("empate \n");
    
}else if((escolhajogador == 1) && (escolhacomputador == 3) || 
          (escolhajogador == 2) && (escolhacomputador ==  1) ||
           (escolhajogador == 3) && (escolhacomputador == 2))
{ printf("voce ganhou \n");

}else{
    printf("voce perdeu \n");
}


           









return 0;

}