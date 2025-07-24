#include <stdio.h>
  
 struct carta{ 

    // Representação Estrutura da carta
    
    char estado;                         // Uma letra de 'A' a 'H'
    char codigo[4];                      // Ex: de "A01","B02" 
    char nomedacidade[50];               // Nome da cidade
    int populacao;                       // Numeros da habitantes
    float area;                          // Área da Cidade em Km²
    float pib;                           // Pib da Cidade
    int pontosTuristico;                // Numeoros de Pontos Turístico da Cidade
 };

 // Criando Cartas 1 e 2
 
    int main (){

        struct carta carta1;
        struct carta carta2;
        
        // Cadastro de carta 1

        printf("**** Cadastro de Carta 1 **** \n");
        
        printf("Digite a letra do Estado: ( A a H):");
        scanf("%c",&carta1.estado);

        printf("Digite o Código da Carta (Ex: A01):");
        scanf("%s",&carta1.codigo);

        printf("Digite o Nome da Cidade: ");
        scanf("%s",&carta1.nomedacidade);

        printf("Digite a População: ");
        scanf("%d",&carta1.populacao);

        printf("Digite a Área em Km²:");
        scanf("%f",&carta1.area);

        printf("Digite o PIB (em Bilhões):");
        scanf("%f",&carta1.pib);

        printf("Digite o Número de Pontos Turistico:");
        scanf("%d",&carta1.pontosTuristico);

        printf("\n");
        
        
        printf("**** Cadastro de Carta 2 **** \n");

        printf("Digite a letra do Estado ( A a H): ");
        scanf("%c",&carta2.estado);

        printf("Digite o Código da Carta (Ex: A01): ");
        scanf("%s",&carta2.codigo);

        printf("Digite o Nome da Cidade: ");
        scanf("%s",&carta2.nomedacidade);

        printf("Digite a População: ");
        scanf("%d",&carta2.populacao);

        printf("Digite a Área em Km²:");
        scanf("%f",&carta2.area);

        printf("Digite o PIB (em Bilhões):");
        scanf("%f",&carta2.pib);

        printf("Digite o Número de Pontos Turistico:");
        scanf("%d",&carta2.pontosTuristico);

        printf("\n");
        printf("\n");


      
        printf("*** Carta 1 *** \n");
        printf("Estado:%c\n",carta1.estado);
        printf("Código:%s\n",carta1.codigo);
        printf("Nome de Cidade:%s\n",carta1.nomedacidade);
        printf("População:%d\n",carta1.populacao);
        printf("Área:%.2f Km²\n",carta1.area);
        printf("PIB:%.2f Bilhões de reais\n",carta1.pib);
        printf("Números de Pontos Turísticos:%d \n",carta1.pontosTuristico);

        printf("\n");

        
        
        printf("*** Carta 2 ***\n");
      
        printf("Estado:%c\n",carta2.estado);
        printf("Código:%s\n",carta2.codigo);
        printf("Nome de Cidade:%s\n",carta2.nomedacidade);
        printf("População:%d\n",carta2.populacao);
        printf("Área:%.2f Km²\n",carta2.area);
        printf("PIB:%.2f Bilhões de reais\n",carta2.pib);
        printf("Números de Pontos Turísticos:%d\n",carta2.pontosTuristico);


        

        return 0;

    }




    

    



    
    


    






