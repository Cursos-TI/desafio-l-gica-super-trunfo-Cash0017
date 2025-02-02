#include <stdio.h>
int main(){

int numero;

printf("digite um numero:");
scanf("%d", &numero);

if(numero > 0){
    if(numero % 2 ==0){
        printf("numero é par \n");
    }else{
        printf("numero é impar \n");
    }
}else if(numero == 0){
    printf("numero zero \n");
     }
     else{
        printf("numero negativo \n");
     
}


return 0;
}