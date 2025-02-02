#include <stdio.h>

int main(){


int opcao;
float saldo = 1000.00;


  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("seu saldo é: R$ %f\n", saldo);
    break;
case 2:
    printf("digite o numero do banco: \n");
    printf("digite a agencia: \n");
    printf("digite o numero da conta: \n");
    break;
case 3:
    printf("digite o valor a sacar: \n");
    break;
default:
    printf("opção invalida \n");
    break;
}




    return 0;
}