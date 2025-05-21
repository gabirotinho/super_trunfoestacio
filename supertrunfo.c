#include <stdio.h>

int main (){

char nome [30], nome2 [30];
int idade, idade2;
float populacao, populacao2, densidade, densidade2, renda, renda2;

//Abaixo coletando infos da carta A...................................................
printf("Carta A\n Insira as informações a seguir: \n");

printf("Nome do país: \n"); //perguntando nome %s
scanf("%s", &nome);

printf ("População (milhões): \n"); //população em milhões %f
scanf ("%f", &populacao);

printf ("Pessoas por km2: \n"); //pessoas por km2 (densidade) %f
scanf("%f", &densidade);

printf ("Expectativa de vida (anos): \n"); //expectativa de vida media %d
scanf("%d", &idade);

printf ("Renda per capita (em USD): \n"); //renda media por pessoa em dolar %f
scanf ("%f", &renda);

//Abaixo coletando infos da carta B..............................................
printf("Carta B\n Insira as informações a seguir: \n");


printf("Nome do país: \n"); //perguntando nome %s
scanf("%s", &nome2);

printf ("População (milhões): \n"); //população em milhões %f
scanf ("%f", &populacao2);

printf ("Pessoas por km2: \n"); //pessoas por km2 (densidade) %f
scanf("%f", &densidade2);

printf ("Expectativa de vida (anos): \n"); //expectativa de vida media %d
scanf("%d", &idade2);

printf ("Renda per capita (em USD): \n"); //renda media por pessoa em dolar %f
scanf ("%f", &renda2);

//Abaixo as informações da carta A e B......................................

printf ("Carta A: %s \n", nome);
printf ("População: %f \n", populacao);
printf ("Pessoas por km2: %f \n", densidade);
printf("Expectativa de vida: %d anos \n", idade);
printf ("Renda per capita (USD): %f \n", renda);

printf ("Carta B: %s \n", nome2);
printf ("População: %f \n", populacao2);
printf ("Pessoas por km2: %f \n", densidade2);
printf("Expectativa de vida: %d anos \n", idade2);
printf ("Renda per capita (USD): %f \n", renda2);

return 0;
}