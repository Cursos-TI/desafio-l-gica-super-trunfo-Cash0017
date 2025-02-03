#include <stdio.h>
int main(){

float nota1, nota2, media;
int opcao;

  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("calcular media \n");
    printf("digite sua primeira nota: \n");
    scanf("%.2f", &nota1);
    printf("digite a segunda nota: \n");
    scanf("%.2f", &nota2);

if( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
    media = (nota1 + nota2) / 2;
    printf("a media é: %.2f\n", media);
}else{
    printf("valores errados \n");
}

    break;
case 2:
    printf("determinar status \n");
    printf("entre com a sua media:\n");
    scanf("%f", &media);
    
    
    if(media >= 7){
        printf("aprovado \n");
    }else if(media >= 5){
        printf("recuperação \n");
    }else("reprovado \n");
    break;
case 3:
    printf("saindo... \n");
    break;
default:
printf("opção invalida \n");
    break;
}





    return 0;
}