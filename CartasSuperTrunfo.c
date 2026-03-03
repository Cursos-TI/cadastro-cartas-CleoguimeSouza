#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, NomeDaCidade[20];
    int populacao, codigoDaCarta, PontosTuristico;
    float area, pib; 

  // Área para entrada de dados


      printf ("carta 01:\n");
        printf ("Digite o nome do estado? ");
          scanf ("%c", &estado);

        printf ("digite o código da carta? ");
          scanf ("%d", &codigoDaCarta); 

        printf ("digite o nome da cidade? ");
          scanf ("%s", &NomeDaCidade); 

        printf ("digite a quantidade de população exixtente? ");
         scanf ("%d", &populacao); 

        printf ("Qual a área do estado? "); 
         scanf ("%f", &area); 

        printf ("Qual o pib do estado? "); 
         scanf ("%f", &pib); 

        printf ("Quantos pontos turísticos o estado tem?");
          scanf ("%d", &PontosTuristico); 

  // Área para exibição dos dados da cidade

        printf ("O nome do estado é: %c\n", estado);

        printf ("O codigo da carta é: %d\n", codigoDaCarta);

        printf ("O nome da cidade é: %s\n", NomeDaCidade);

        printf ("A quantidade de pessoas são: %d\n", populacao);

        printf ("A area do estado é: %.2f KM²\n", area);

        printf ("O PIB do estado é: %.2f\n", pib);

        printf ("A quantidade de pontos turistico é: %d\n", PontosTuristico);


return 0;
} 
