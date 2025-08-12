#include <stdio.h>

int main() {
    
    char estado1, estado2;                 //Variáveis para Estados representados apenas por uma letra.
    char codigocarta1[4], codigocarta2[4]; //Variáveis para os códigos das cartas com 3 digitos.
    char nomecidade1[30], nomecidade2[30]; //Variáveis para os nomes das cidades.
    int populacao1, populacao2, pontotur1, pontotur2; //Variaveis para quantidade de população e pontos turísticos da cidades.
    float area1, area2, pib1, pib2;                   //Variáveis para area (em km2) e PIB da cidade.

        printf("SEJAM BEM VINDOS AO SUPER TRUNFO PAÍSES!\n");           //Apresenta o início do jogo.
        
        printf("\nJogador 1, insira os dados de sua carta:\n");         //Solicita ao Jogador 1 que insira os dados de sua carta.
        printf("Insira o Estado (represente por letras de 'A' a 'H'):\n") //Solicita o codigo do estado da carta do Jogador 1.
        scanf("%c", &estado1);                                          //Armazena o nome do estado da carta do Jogador 1.
        printf("Insira o código da carta, iniciando pela letra do estado (Ex:A01, B02): \n"); //Solicita o código da carta do Jogador 1.
        scanf("%s", nomecidade1);                                      //Armazena o codigo da carta do Jogador 1.
        printf("Insira do nome da cidade: \n");
        scanf("%s", nomecidade1);
        printf("Insira o número de habitantes da cidade: \n");
        
    return 0;
}
