#include <stdio.h>

int main(){
    
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float Pib1, Pib2;
    int pontosTuristico1, pontosTuristico2;
    float densidade1, densidade2;
    float pibPerCapita1,pibPerCapita2;

    //leitura de carta 

    printf("*** Cadastro de Carta 1 ***\n");

    printf("Digite a Letra do Estado (A a H): ");
    scanf(" %c",& estado1);

    printf("Digite Código da Carta (ex: A01): ");
    scanf(" %s",codigo1);

    printf("Digite o Nome da Cidade:");
    scanf(" %[^\n]",nomeCidade1);

    printf("Digite a População: ");
    scanf(" %d",&populacao1);

    printf("Digite a Área em Km²: ");
    scanf(" %f",&area1);

    printf("Digite o Pib: ");
    scanf(" %f",&Pib1);

    printf("Números de Pontos Turísticos:");
    scanf(" %d",&pontosTuristico1);

    
    
    
    printf("\n");
    
    
    
    printf("*** Cadastro de Carta 2 ***\n");
    
    printf("Digite a Letra do Estado (A a H): ");
    scanf(" %c",&estado2);
    
    printf("Digite Código da Carta (ex: A01): ");
    scanf(" %s",codigo2);
    
    printf("Digite o Nome da Cidade:");
    scanf(" %[^\n]",nomeCidade2);
    
    printf("Digite a População: ");
    scanf("%d",&populacao2);
    
    printf("Digite a Área em Km²: ");
    scanf(" %f",&area2);
    
    printf("Digite o Pib: ");
    scanf(" %f",&Pib2);
    
    printf("Números de Pontos Turísticos:");
    scanf(" %d",&pontosTuristico2);
    
    
    densidade1=populacao1/area1;
    pibPerCapita1=(Pib1*1000000000)/populacao1; 

    densidade2=populacao2/area2;
    pibPerCapita2=(Pib2*1000000000)/populacao2;
    
    printf("\n");
    
    

    printf("*** Carta 1 ***\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nomeCidade1);
    printf("População: %d\n",populacao1);
    printf("Área: %.2f Km²\n",area1);
    printf("Pib: %.2f bilhões de reais\n",Pib1);
    printf("Número de Pontos Turístico: %d\n",pontosTuristico1);
    printf("Densidade Populacional: %.2f hab/Km²\n",densidade1);
    printf("PIB per capita: R$ %.2f reais\n",pibPerCapita1);


    printf("\n");


    
    printf("*** Carta 2 ***\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nomeCidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %.2f Km²\n",area2);
    printf("Pib: %.2f bilhões de reais\n",Pib2);
    printf("Número de Pontos Turístico: %d\n",pontosTuristico2);
    printf("Densidade Populacional: %.2f hab/Km²\n",densidade2);
    printf("PIB per Capita: R$ %.2f reais\n",pibPerCapita2);




    return 0;

}

    