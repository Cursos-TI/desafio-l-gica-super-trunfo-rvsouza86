#include <stdio.h>


int main() {


     char pais1[50], pais2[40];      // 'Cidade', é o nome de uma ciadade brasileira, é usado o especificador de formato.%s.

     int populacao1, populacao2;  // 'População', é a quantidade de habitantes que tem na cidade, é usado o especificador de formato  %d.
     
     float area1, area2;  //'Área', é o tamaho territorial da cidade em km², é usado o especificador de formato %f.

     float PIB1, PIB2;    // 'PIB', é o valor "Produto interno bruto" em bilhões de reais, é usado o especificador %f.

     int  pontosturisticos1, pontosturisticos2 ; // 'Pontos Turisticos' , é a quantidade de locais turísticos que contem na cidade, é usado o especificador de formato %d.
     
     float densidade1, densidade2; // densidade é o resultado da populacao dividido pela area
  
     float percapita1, percapita2; // percapita é o resultado do PIB dividido pela populaçao

     //  super poder resultado da soma dos atributos de populaçao a percapita, sendo que se dividi 1/densidade
    float superpoder1, superpoder2;

     //variavel para comparação das cartas
     int escolhaatributo;
     

    
     
       


     
     //as informações das cartas 1 e 2 sao preenchidas pelo usuário
     
     
     

     printf("Carta 1\n");
   
    printf("Qual o País: ");
    scanf("%s", pais1);
    
     printf("Quantidade de habitantes: ");
     scanf("%d", &populacao1);

     printf("Tamanho da cidade em Km²: ");
     scanf("%f", &area1);

     printf("Qual o PIB da cidade: ");
     scanf("%f", &PIB1);

     printf("Pontos turísticos: ");
     scanf("%d", &pontosturisticos1);  

     // calculo densidade1 é =  populaçao1 / area1

     densidade1 = (float)populacao1 / area1; 

     /* calculo percapita1 é =  PIB1 / populacao1

     percapita1 = (float)PIB1 / populacao1; 

     //calculo super poder1

    superpoder1 = (float)populacao1 + area1 + PIB1 + pontosturisticos1 + percapita1 + (1/densidade1); */
       



     printf("Carta 2:\n");

     printf("Qual o País: ");
     scanf("%s", pais2);

     printf("Quantidade de habitantes: ");
     scanf("%d", &populacao2);

     printf("Tamanho da cidade em km²: ");
     scanf("%f", &area2);

     printf("Qual o PIB da cidade: ");
     scanf("%f", &PIB2);
     
     printf("Pontos turísticos: ");
     scanf("%d", &pontosturisticos2);

     // calculo densidade2, populaçao2 / area2

     densidade2 = (float)populacao2 / area2; 

     // calculo percapita2, PIB2 / populacao2

     percapita2 = (float)PIB2 / populacao2; 

     //calculo super poder2

     superpoder2 = (float)populacao2 + area2 + PIB2 + pontosturisticos2 + percapita2 + (1/densidade2);

     

     printf("Carta 1\n");
     printf("País: %s\n", pais1);
     printf("População: %d habitantes\n", populacao1);
     printf("Àrea: %.3f  km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", PIB1);
     printf("Pontos turísticos: %d\n", pontosturisticos1);
     printf("Densidade populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.3f reais\n",percapita1);
     printf("Super Poder: %.0f\n\n",superpoder1);


     printf("Carta 2\n");
     printf("País: %s\n", pais2);
     printf("População: %d habitantes\n",populacao2);
     printf("Área: %.3f km²\n", area2);
     printf("PIB: %.3f bilhões de reais\n", PIB2);
     printf("Pontos turísticos: %d\n", pontosturisticos2);
     printf("Densidade populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.3f reais\n",percapita2);
     printf("Super Poder: %.0f\n\n",superpoder2);

     // comparação das cartas 1 e 2, a carta com o atributo de maior valor ganha, 
     //exceto densidade populacional, ganha a carta com menor valor

     
    printf("Escolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Atributo: ");
    scanf("%d", &escolhaatributo);

    switch (escolhaatributo)
    {
    case 1: // comparacão do atributo população
      printf("País: %s, População: %d habitantes\nPaís: %s, População: %d habitantes\n"
                                                   , pais1, populacao1, pais2, populacao2);

       if (populacao1 > populacao2)
       printf("***País %s ganhou, Parabéns!***\n", pais1);
       else if (populacao2 > populacao1)
       printf ("***País %s ganhou, Parabéns!***\n", pais2);
       else 
       printf("***Houve um empate.***");
  
       break;

       case 2: // comparação do atributo Área
       printf("País: %s, Área: %.3f Km² \nPaís: %s, Área: %.3f Km²\n"
             , pais1, area1, pais2, area2);
       if (area1 > area2)
       printf("***País %s ganhou, Parabéns!***\n", pais1);
       else if (area2 > area1)
       printf ("***País %s ganhou, Parabéns!***\n", pais2);
       else 
       printf("***Houve um empate.***");
       break;

       case 3: //Comparação do atributo PIB
       printf("País: %s, PIB: %.3f  \nPaís: %s, PIB: %.3f \n"
             , pais1, PIB1, pais2, PIB2);
       if (PIB1 > PIB2)
       printf("***País %s ganhou, Parabéns!***\n", pais1);
       else if (PIB2 > PIB1)
       printf ("***País %s ganhou, Parabéns!***\n", pais2);
       else 
       printf("***Houve um empate.***");
       break;

       case 4: //Comparação do atributo Ponto Turístico
       printf("País: %s, Pontos Turísticos: %d  \n País: %s, Pontos Turísticos: %d \n"
                , pais1, pontosturisticos1, pais2, pontosturisticos2);

       if (pontosturisticos1 > pontosturisticos2)
       printf("***País %s ganhou, Parabéns!***\n", pais1);
       else if (pontosturisticos2 > pontosturisticos1)
       printf ("***País %s ganhou, Parabéns!***\n", pais2);
       else 
       printf("***Houve um empate.***");
       break;

       case 5://Comparação do atributo Densidade
       printf("País: %s, Densidade Demográfica: %.3f \n País: %s, Densidade Demográfica: %.3f\n"
                       , pais1, densidade1, pais2, densidade2);
       if (densidade1 > densidade2)
       printf("***País %s ganhou, Parabéns!***\n", pais1);
       else if (densidade2 > densidade1)
       printf ("***País %s ganhou, Parabéns!***\n", pais2);
       else 
       printf("***Houve um empate.***");
       break;
       default:
       printf("opção inválida");
       break;
       }
       
       return 0;
       
      }
