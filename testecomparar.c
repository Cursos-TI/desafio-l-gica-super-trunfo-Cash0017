#include <stdio.h>
int main (){

int num1, num2;
int resultado;

printf("digite o numero um: \n");
scanf("%d", &num1);

printf("digite o numero dois: \n");
scanf("%d", &num2);


num1 > num2 ? (resultado = num1) : (resultado = num2);
    printf("numero maior é: %d\n", resultado);







    return 0;
}