#include <stdio.h>

int main(){

    int opcao;
    float Populacao, Populacao2, numerodepontosturisticos, numerodepontosturisticos2, Area, Area2,
    PIB, PIB2, Densidade, Densidade2;

    printf(" Jogo Atributos  \n");
    printf("Escolha um atributo: \n");
    printf("1. População \n");
    printf("2. número de pontos turisticos \n");
    printf("3. PIB \n");
    printf("4. Densidade \n");
    printf("5. Area \n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
         case 1:
         printf("Digite o Número da População carta 1: ");
         scanf("%f", &Populacao);
         printf("Digite Número da População  da carta 2: ");
         scanf("%f", &Populacao2); 

         if(Populacao > Populacao2)
         {
            printf("Carta 1 Venceu!! \n");
         }
         else if(Populacao < Populacao2) 
         {
            printf("Carta 2 Venceu!!! \n");
         } else {
            printf("!!!EMPATOU!!! \n");}
      break;


         case 2:
         printf("Digite o numerodepontosturisticos da  carta 1: \n");
         scanf("%f", &numerodepontosturisticos);
         printf("Digite Número numerodepontosturisticos  da carta 2: \n");
         scanf("%f", &numerodepontosturisticos2);
         
         if(numerodepontosturisticos > numerodepontosturisticos2)
         {
            printf("Carta 1 Venceu!! \n");
         }
         else if(numerodepontosturisticos < numerodepontosturisticos2) 
         {
            printf("Carta 2 Venceu!!! \n");
         } else {
            printf("!!!EMPATOU!!! \n");}
      break;

         case 3:
         printf("Digite o PIB da carta 1: \n");
         scanf("%f", & PIB);
         printf("Digite o PIB2 da carta 2: \n");
         scanf("%f", & PIB2);
         
         if(PIB > PIB2)
         {
            printf("Carta 1 Venceu!! \n");
         }
         else if(PIB < PIB2) 
         {
            printf("Carta 2 Venceu!!! \n");
         } else {
            printf("!!!EMPATOU!!! \n");}
      break;

         case 4:
         printf("Digite o Densidade da carta 1: \n");
         scanf("%f", & Densidade);
         printf("Digite o Densidade2 da carta 2: \n");
         scanf("%f", & Densidade2); 

         if(Densidade > Densidade2)
         {
            printf("Carta 1 Venceu!! \n");
         }
         else if(Densidade < Densidade2) 
         {
            printf("Carta 2 Venceu!!! \n");
         } else {
            printf("!!!EMPATOU!!! \n");}
       break;

         case 5:
         printf("Digite o Area da carta 1: \n");
         scanf("%f", & Area);
         printf("Digite o Area2 da carta 2: \n");
         scanf("%f", & Area2); 

         if(Area > Area2)
         {
            printf("Carta 1 Venceu!! \n");
         }
         else if(Area < Area2) 
         {
            printf("Carta 2 Venceu!!! \n");
         } else {
            printf("!!!EMPATOU!!! \n");}
      break;
    

    

      
    }
   }
             







