#include <stdio.h>

int main() {
    
    char estado1, estado2;                 //Variáveis para Estados representados apenas por uma letra.
    char codigocarta1[4], codigocarta2[4]; //Variáveis para os códigos das cartas com 3 digitos.
    char nomecidade1[30], nomecidade2[30]; //Variáveis para os nomes das cidades.
    int populacao1, populacao2, pontotur1, pontotur2; //Variaveis para quantidade de população e pontos turísticos das cidades.
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcapita1, pibcapita2; //Variáveis para area (em km2), PIB, Densidade populacinal e PIB per capita das cidades.

        printf("========================================\n");
        printf("SEJAM BEM VINDOS AO SUPER TRUNFO PAÍSES!\n");           //Apresenta o início do jogo.
        printf("========================================\n");
        
        printf("\nJOGADOR 1, insira os dados de sua carta\n\n");         //Solicita ao Jogador 1 que insira os dados de sua carta.
        printf("Insira o Estado (represente por letras de 'A' a 'H'): "); //Solicita o codigo do estado da carta do Jogador 1.
        scanf("%c", &estado1);                                          //Armazena o nome do estado da carta do Jogador 1.
        printf("Insira o código da carta, iniciando pela letra do estado (Ex:A01, B02): "); //Solicita o código da carta do Jogador 1.
        scanf("%s", codigocarta1);                                      //Armazena o codigo da carta do Jogador 1.
        printf("Insira do nome da cidade: ");                        //Solicita o nome da cidade do Jogador 1.
        scanf("%s", nomecidade1);                                      //Armazena o nome da cidade do Jogador 1.
        printf("Insira o número de habitantes da cidade: ");         //Solicita a quantidade de habitantes da cidade do Jogador 1.
        scanf("%d", &populacao1);                                      //Armazena a quantidade de habitantes da cidade do Jogador 1.
        printf("Insira a area (em Km²) da cidade: ");                //Solicita a area da cidade do Jogador 1.
        scanf(" %f", &area1);                                           //Armazena a area da cidade do Jogador 1.
        printf("Insira o PIB da cidade: ");                          //Solicita o PIB da cidade do Jogador 1.
        scanf("%f", &pib1);                                            //Armazena o PIB da cidade do Jogador 1.
        printf("Insira a quantidade de pontos turísticos da cidade: ");   //Solicita quantidade de pontos turisticos da cidade do Jogador 1.
        scanf("%d", &pontotur1);                                            //Armazena quantidade de pontos turisticos da cidade do Jogador 1.
        densidade1 = populacao1 / area1;                                    //Calcula a densidade populacional da cidade do Jogador 1.
        pibcapita1 = pib1 / populacao1;                                     //Calcula o PIB per capita da cidade do Jogador 1.
         
        printf("\nJOGADOR 2, insira os dados de sua carta\n\n");         //Solicita ao Jogador 2 que insira os dados de sua carta.
        printf("Insira o Estado (represente por letras de 'A' a 'H'): ");    //Solicita o codigo do estado da carta do Jogador 2.
        scanf(" %c", &estado2);                                          //Armazena o nome do estado da carta do Jogador 2.
        printf("Insira o código da carta, iniciando pela letra do estado (Ex:A01, B02): "); //Solicita o código da carta do Jogador 2.
        scanf("%s", codigocarta2);                                      //Armazena o codigo da carta do Jogador 2.
        printf("Insira do nome da cidade: ");                        //Solicita o nome da cidade do Jogador 2.
        scanf("%s", nomecidade2);                                      //Armazena o nome da cidade do Jogador 2.
        printf("Insira o número de habitantes da cidade: ");         //Solicita a quantidade de habitantes da cidade do Jogador 2.
        scanf("%d", &populacao2);                                      //Armazena a quantidade de habitantes da cidade do Jogador 2.
        printf("Insira a area (em Km²) da cidade: ");                //Solicita a area da cidade do Jogador 2.
        scanf(" %f", &area2);                                           //Armazena a area da cidade do Jogador 2.
        printf("Insira o PIB da cidade: ");                          //Solicita o PIB da cidade do Jogador 2.
        scanf("%f", &pib2);                                            //Armazena o PIB da cidade do Jogador 2.
        printf("Insira a quantidade de pontos turísticos da cidade: ");   //Solicita quantidade de pontos turisticos da cidade do Jogador 2.
        scanf("%d", &pontotur2);                                            //Armazena quantidade de pontos turisticos da cidade do Jogador 2.
        densidade2 = populacao2 / area2;                                    //Calcula a densidade populacional da cidade do Jogador 2.
        pibcapita2 = pib2 / populacao2;                                     //Calcula o PIB per capita da cidade do Jogador 2.

        printf("\n\nSUPER TRUNFO PAÍSES!\n\n");
        printf("========================================\n");               //Mostra os dados inseridos pleo Jogador 1
        printf("DADOS DA CARTA DO JOGADOR 1:\n");
        printf("Estado: %c \n", estado1);
        printf("Codigo da carta: %s \n", codigocarta1);
        printf("Nome da Cidade: %s \n", nomecidade1);
        printf("População: %d \n", populacao1);
        printf("Área: %.2f Km² \n", area1);
        printf("PIB: %.2f reais \n", pib1);
        printf("Número de Pontos Turísticos: %d \n", pontotur1);
        printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
        printf("PIB per Capita: %.2f reais \n", pibcapita1);
        printf("========================================\n\n");

        printf("========================================\n");
        printf("DADOS DA CARTA DO JOGADOR 2:\n");                       //Mostra os dados inseridos pelo Jogador 2
        printf("Estado: %c \n", estado2);
        printf("Codigo da carta: %s \n", codigocarta2);
        printf("Nome da Cidade: %s \n", nomecidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2f Km² \n", area2);
        printf("PIB: %.2f reais \n", pib2);
        printf("Número de Pontos Turísticos: %d \n", pontotur2);
        printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
        printf("PIB per Capita: %.2f reais \n", pibcapita2);
        printf("========================================\n\n");

    return 0;
}

