#include <stdio.h>
int main(){

int idade;
float altura;

printf("digite sua idade: \n");
scanf("%d", &idade);

printf("digite sua altura: \n");
scanf("%f", &altura);


if(idade >= 18 && idade <= 30 || altura >= 1.70){
    printf("voce atende a pelo menos um requisito \n");

}else{
    printf("voce nao atende a nenhum requisitos \n");
}












    return 0;
}