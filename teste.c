#include <stdio.h>
int main() {

int idade;

printf("digite sua idade: \n");
scanf("%d", &idade);



//crianca < 12
//adolescente <= 12 x < 18
//adulto >= 18 x < 60
//idoso > 60

if(idade >= 60){
    printf("voce é idoso \n");
}else if(idade >= 18  && idade < 60  ){
    printf("voce é adulto \n");
}else if(idade >= 12 && idade < 18 ){
    printf("voce é adolescente \n");
}else{
    printf("voce é criança \n");
}





return 0;

}