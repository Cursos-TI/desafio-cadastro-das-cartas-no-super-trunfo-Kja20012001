#include <stdio.h>

int main(){
    //Declaração das variáveis.

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int  populacao1, populacao2;
    float area1, area2;
    float Pib1, Pib2;
    int pontosTuristico1, pontosTuristico2;
    float densidade1, densidade2;
    float pibPerCapita1,pibPerCapita2;
    float superPoder1, superPoder2;

    // *** CADASTRO DA CARTA 1 ***

    printf("*** Cadastro de Carta 1 ***\n");

    printf("Digite a Letra do Estado (A a H): ");
    scanf(" %c",& estado1);

    printf("Digite Código da Carta (ex: A01): ");
    scanf(" %s",codigo1);

    printf("Digite o Nome da Cidade:");
    scanf(" %[^\n]",nomeCidade1);

    printf("Digite a População: ");
    scanf(" %lu",&populacao1);

    printf("Digite a Área em Km²: ");
    scanf(" %f",&area1);

    printf("Digite o Pib: ");
    scanf(" %f",&Pib1);

    printf("Números de Pontos Turísticos:");
    scanf(" %d",&pontosTuristico1);

    
    
    
    printf("\n");
    
    // *** CADASTRO DA CARTA 2 ***
    
    printf("*** Cadastro de Carta 2 ***\n");
    
    printf("Digite a Letra do Estado (A a H): ");
    scanf(" %c",&estado2);
    
    printf("Digite Código da Carta (ex: A01): ");
    scanf(" %s",codigo2);
    
    printf("Digite o Nome da Cidade:");
    scanf(" %[^\n]",nomeCidade2);
    
    printf("Digite a População: ");
    scanf(" %lu",&populacao2);
    
    printf("Digite a Área em Km²: ");
    scanf(" %f",&area2);
    
    printf("Digite o Pib: ");
    scanf(" %f",&Pib2);
    
    printf("Números de Pontos Turísticos:");
    scanf(" %d",&pontosTuristico2);
    
    // Calculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (Pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (Pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + area1 + Pib1 + pontosTuristico1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + Pib2 + pontosTuristico2 + pibPerCapita2 + (1.0 / densidade2);
    
    printf("\n");
    
    

    printf("*** Carta 1 ***\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nomeCidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %.2f Km²\n",area1);
    printf("Pib: %.2f bilhões de reais\n",Pib1);
    printf("Número de Pontos Turístico: %d\n",pontosTuristico1);
    printf("Densidade Populacional: %.2f hab/Km²\n",densidade1);
    printf("PIB per capita: R$ %.2f reais\n",pibPerCapita1);
    printf("Super Poder: %.2f\n",superPoder1);



    printf("\n");


    
    printf("*** Carta 2 ***\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nomeCidade2);
    printf("População: %lu\n",populacao2);
    printf("Área: %.2f Km²\n",area2);
    printf("Pib: %.2f bilhões de reais\n",Pib2);
    printf("Número de Pontos Turístico: %d\n",pontosTuristico2);
    printf("Densidade Populacional: %.2f hab/Km²\n",densidade2);
    printf("PIB per Capita: R$ %.2f reais\n",pibPerCapita2);
    printf(" Super Poder: %.2f\n",superPoder2);


   // printf("*** Comparação de Cartas ***\n");

  /*  printf("População: Carta %d venceu (%d)\n", 
        populacao1 > populacao2 ? 1 : 2, 
        populacao1 > populacao2 ? 1 : 0);

    printf("Área: Carta %d venceu (%d)\n", 
        area1 > area2 ? 1 : 2, 
        area1 > area2 ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n", 
        Pib1 > Pib2 ? 1 : 2, 
        Pib1 > Pib2 ? 1 : 0);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
        pontosTuristico1 > pontosTuristico2 ? 1 : 2, 
        pontosTuristico1 > pontosTuristico2 ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        densidade1 < densidade2 ? 1 : 2, 
        densidade1 < densidade2 ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        pibPerCapita1 > pibPerCapita2 ? 1 : 2, 
        pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n", 
        superPoder1 > superPoder2 ? 1 : 2, 
        superPoder1 > superPoder2 ? 1 : 0);           */



      //  COMPARAÇÃO POR POPULAÇÃO 

  /*  printf("Comparação de cartas (A tributos: População)\n");
    printf("Carta 1 : %s (%c): %lu Habitantes\n", nomeCidade1,estado1,populacao1);
    printf("Carta 2 : %s (%c): %lu Habitantes\n", nomeCidade2,estado2,populacao2);
        
    if(populacao1>populacao2) { 
        printf("Resultado: Carta 1 (%s) Venceu!\n",nomeCidade1);
        } else if(populacao2>populacao1) {
             printf("Resultado: Carta 2 (%s) Venceu!\n",nomeCidade2);
            } else {
                printf("Resultado: Empate! As Duas Cidades Possuem a Mesma Pontuação,\n");   */



    printf("*** Comparação de Cartas ***\n");

    // COMPARAÇÃO POR DENSIDADE POPULACIONAL 
    printf("Comparação de cartas (Atributo: Densidade Populacional)\n");
    printf("Carta 1 : %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
    printf("Carta 2 : %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
    
    if (densidade1 < densidade2) {
    printf("Resultado: Carta 1 (%s) Venceu!\n", nomeCidade1);
        } else if (densidade2 < densidade1) {
    printf("Resultado: Carta 2 (%s) Venceu!\n", nomeCidade2);
        } else {
    printf("Resultado: Empate! As duas cidades possuem a mesma densidade.\n");
        }


    return 0;

}

    