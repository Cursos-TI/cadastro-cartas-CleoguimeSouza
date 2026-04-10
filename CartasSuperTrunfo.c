#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[20], NomeDaCidade[20];
    int populacao01, populacao02, codigoDaCarta, PontosTuristico;
    float area1, area2, pib01, pib02, percapita1, dencidade1, percapita2, dencidade2; 

  // Área para entrada de dados


       printf ("*****carta 1*****\n");

       printf ("Digite o nome do estado? ");
        scanf ("%c", &estado);

       printf ("digite o código da carta? ");
        scanf ("%d", &codigoDaCarta); 

       printf ("digite o nome da cidade? ");
        scanf ("%s", &NomeDaCidade); 

       printf ("digite a quantidade de população exixtente? ");
        scanf ("%d", &populacao01); 

       printf ("Qual a área do estado? "); 
        scanf ("%f", &area1); 

       printf ("Qual o pib do estado? "); 
        scanf ("%f", &pib01); 

       printf ("Quantos pontos turísticos o estado tem?");
        scanf ("%d", &PontosTuristico); 

      printf ("*****carta 2*****\n");

      printf ("Digite o nome do estado? ");
        scanf ("%s", &estado);

      printf ("digite o código da carta? ");
        scanf ("%d", &codigoDaCarta); 

      printf ("digite o nome da cidade? ");
        scanf ("%s", &NomeDaCidade); 

      printf ("digite a quantidade de população existente? ");
        scanf ("%d", &populacao02); 

      printf ("Qual a área do estado? "); 
        scanf ("%f", &area2); 

      printf ("Qual o pib do estado? "); 
        scanf ("%f", &pib02); 

      printf ("Quantos pontos turísticos o estado tem?");
        scanf ("%d", &PontosTuristico); 
        
  // Área para exibição dos dados da cidade

  // exibindo dados da carta 1

        printf ("O nome do estado é: %c\n", estado);

        printf ("O codigo da carta é: %d\n", codigoDaCarta);

        printf ("O nome da cidade é: %s\n", NomeDaCidade);

        printf ("A quantidade de pessoas são: %d\n", populacao);

        printf ("A area do estado é: %.2f KM²\n", area);

        printf ("O PIB do estado é: %.2f\n", pib);

        printf ("A quantidade de pontos turistico é: %d\n", PontosTuristico);

  // calculando dencidade populacional da carta 1 e imprimindo

        dencidade1 = (populacao01 / area1);
        printf ("a dencidade populacional é: %.2f\n", dencidade1);

  // calculando pib percapita da carta 1 e imprimindo

        percapita1 = (pib01 / populacao01); 
        printf ("O pib é: %f\n", percapita1);


  //exibindo dados da carta dois

        
      printf ("O nome do estado é: %s\n", estado);

      printf ("O codigo da carta é: %d\n", codigoDaCarta);

      printf ("O nome da cidade é: %s\n", NomeDaCidade);

      printf ("A quantidade de pessoas são: %d\n", populacao02);

      printf ("A area do estado é: %.2f KM²\n", area2);

      printf ("O PIB do estado é: %.2f\n", pib02);

      printf ("A quantidade de pontos turistico é: %d\n", PontosTuristico);

  //Cauculando a dencidade populacional carta 2 e imprimindo

      dencidade2 = (populacao02 / area2);
      printf ("a dencidade populacional é: %.2f\n", dencidade2);

  //calculando pib percapita da carta 2 e imprimindo

      percapita2 = (pib02 / populacao02); 
      printf ("O pib é: %f\n", percapita2);
      
  



return 0;
} 
