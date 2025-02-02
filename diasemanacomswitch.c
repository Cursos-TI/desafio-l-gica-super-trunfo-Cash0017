#include <stdio.h>
int main(){

int dia;
printf("entre o valor do dia:");
 scanf("%d", &dia);

switch (dia)
{
case 1:
    printf("domingo \n");
    break;
case 2:
    printf("segunda feira \n");
    break;
case 3:
    printf("terça feira \n");
    break;
case 4:
   printf("quarta feira \n");
   break;
case 5:
   printf("quinta feira \n");
   break;
case 6:
   printf("sexta feira \n");
   break;
case 7:
   printf("sabado \n");
   break;
default:
   printf("opção invalida \n");
    break;
}







return 0;
}