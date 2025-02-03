#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
char escolhajogador;
int escolhacomputador;
srand(time(0));

printf("jogo jokenpo \n");
printf("escolha as opções \n");
printf("a. pedra \n");
printf("b. papel \n");
printf("c. tesoura \n");
printf("escolha: ");
scanf("%c", &escolhajogador);

escolhacomputador = rand() % 3 + 1;

switch (escolhajogador)
{
case 'a':
    printf("voce escolheu: pedra \n");
    break;
case 'b':
    printf("voce escolheu: papel \n");
    break;
case 'c':
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
    
}else if((escolhajogador == 'a') && (escolhacomputador == 3) || 
          (escolhajogador == 'b') && (escolhacomputador ==  1) ||
           (escolhajogador == 'c') && (escolhacomputador == 2))
{ printf("voce ganhou \n");

}else{
    printf("voce perdeu \n");
}


           









return 0;

}