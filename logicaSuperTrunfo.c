#include <stdio.h>
#include <stdlib.h>

int main(){

char codigo[5];
char nome[100];
float populacao;
float area;
float pib;
int pontosturisticos;
float pibpercapita;
float densidade;
int opcao;

printf("1. iniciar jogo \n");
printf("2. sair \n");
scanf("%d", &opcao);





switch (opcao)
{
case 1:
    
    





printf("cadastro de cidade\n");

printf("digite o codigo da cidade: ");
scanf("%s", codigo);

printf("digite o nome da cidade: ");
scanf("%s", nome);

printf("digite a populacao: ");
scanf("%f", &populacao);

printf("digite a area em km: ");
scanf("%f", &area);

printf("digite o pib: ");
scanf("%f", &pib);

printf("digite o numero de pontos turisticos: \n");
scanf("%d", &pontosturisticos);

pibpercapita = pib / populacao;
densidade = populacao / area;

printf("Dados cadastrados da cidade:\n");
printf("codigo da cidade: %s\n", codigo);
printf("nome da cidade: %s\n", nome);
printf("populacao da cidade: %.3f\n", populacao);
printf("area de cidade: %f km\n", area);
printf("pib da cidade: %.2f\n", pib);
printf("numero de pontos turisticos: %d\n", pontosturisticos);
printf("pib Per Capita: %.2f\n", pibpercapita);
printf("densidade: %.2f\n", densidade);


char codigo2[5];
char nome2[100];
float populacao2;
float area2;
float pib2;
int pontosturisticos2;
float pibpercapita2;
float densidade2;
int atributo;




printf("cadastro da segunda cidade\n");

printf("digite o codigo da segunda cidade: ");
scanf("%s", codigo2);

printf("digite o nome da cidade: ");
scanf("%s", nome2);

printf("digite a populacao: ");
scanf("%f", &populacao2);

printf("digite a area em km: ");
scanf("%f", &area2);

printf("digite o pib: ");
scanf("%f", &pib2);

printf("digite o numero de pontos turisticos: \n");
scanf("%d", &pontosturisticos2);

pibpercapita2 = pib2 / populacao2;
densidade2 = populacao2 / area2;

printf("Dados cadastrados da segunda cidade:\n");
printf("codigo da cidade: %s\n", codigo2);
printf("nome da cidade: %s\n", nome2);
printf("populacao da cidade: %.3f\n", populacao2);
printf("area de cidade: %f km\n", area2);
printf("pib da cidade: %.2f\n", pib2);
printf("numero de pontos turisticos: %d\n", pontosturisticos2);
printf("pib Per Capita: %.2f\n", pibpercapita2);
printf("densidade: %.2f\n", densidade2);



printf("qual compração deseja fazer? \n");
printf("1. compara: população \n");
printf("2. compara: area \n");
printf("3. compara: pib percapita \n");
printf("4. compara: densidade \n");
printf("5. compara: pontos turisticos \n");
scanf("%d", &atributo);



switch (atributo)
{
case 1:
   if(populacao > populacao2){
    printf("primeira cidade ganha em população \n");
}else{
    printf("seguda cidade ganha em população \n");
} 
    break;
case 2:
if(area > area2){
    printf("a area da primeira cidade ganha em km \n");
}else{
    printf("a area da segunda cidade ganha em km \n");
}
   break;
case 3:
if(pibpercapita > pibpercapita2){
    printf("o pib percapita da primera cidade ganha \n");
}else{
    printf("o pib percapita da segunda cidade ganha \n");
}
   break;
case 4:
if(densidade > densidade2){
    printf("a primeira cidade ganha em densidade \n");
}else{
    printf("a segunda cidade ganha em densidade \n");
}
   break;
case 5:
if(pontosturisticos > pontosturisticos2){
    printf("a primeira cidade ganha em numero de pontos turisticos \n");
}else{
    printf("a segunda cidade ganha em numero de pontos turisticos \n");
}
     break;
default:
printf("essa opção não existe \n");
    break;
}

break;
case 2:
printf("saindo....");

default:
printf("opção invalida \n");
    break;
}




return 0;










}