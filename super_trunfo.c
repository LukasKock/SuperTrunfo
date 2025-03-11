#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato


int main() {

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densPopulacional1, densPopulacional2;
    float pibPerCapita1, pibPerCapita2;
 
    //coletando dados 1
    printf("Jogador 1:\n");
    printf("Digite a primeira letra de seu Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o código de 01 a 04:\n");
    scanf("%2s", &codigo1);
    printf("Digite o nome de sua cidade:\n");
    scanf("%19s", &cidade1);
    printf("Digite o número de habitantes de sua cidade:\n");
    scanf("%d", &populacao1);
    printf("Digite a área de sua cidade em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB de sua cidade em bilhões de reais:\n");
    scanf("%f", &pib1);

    //coletando dados 2
    printf("\n\nJogador 2:\n");
    printf("Digite a primeira letra de seu Estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o código de 01 a 04:\n");
    scanf("%2s", &codigo2);
    printf("Digite o nome de sua cidade:\n");
    scanf("%19s", &cidade2);
    printf("Digite o número de habitantes de sua cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a área de sua cidade em km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB de sua cidade em bilhões de reais:\n");
    scanf("%f", &pib2);


    densPopulacional1 = populacao1/area1;
    densPopulacional2 = populacao2/area2;
    pibPerCapita1 = pib1*1e9/populacao1;
    pibPerCapita2 = pib2*1e9/populacao2;

    //imprimindo dados 1
    printf("\nJogador 1 Carta:\n");
    printf("Seu Estado é: %c\n", estado1);
    printf("Seu código é: %c%s\n", estado1, codigo1);
    printf("Sua cidade é: %s\n", cidade1);
    printf("A área da sua cidade é: %.2f km²\n", area1);
    printf("O PIB de sua cidade é: %.2f bilhões de reais\n", pib1);
    printf("A densidade populacional é: %.2f habitantes/m²\n", densPopulacional1);
    printf("O PIB per capita é: %.2f R$/pessoa\n", pibPerCapita1);

    //imprimindo dados 2
    printf("\nJogador 2 Carta:\n");
    printf("Seu Estado é: %c\n", estado2);
    printf("Seu código é: %c%s\n", estado2, codigo2);
    printf("Sua cidade é: %s\n", cidade2);
    printf("A área da sua cidade é: %.2f km²\n", area2);
    printf("O PIB de sua cidade é: %.2f bilhões de reais\n", pib2);
    printf("A densidade populacional é: %.2f habitantes/m²\n", densPopulacional2);
    printf("O PIB per capita é: %.2f R$/pessoa\n\n", pibPerCapita2);

    if(pibPerCapita1 > pibPerCapita2){
        printf("O Jogador 1 é o vencedor! Ele tem o maior PIB per capita.");
    } else if(pibPerCapita1 == pibPerCapita2){
        printf("Empate! O PIB per capita de ambos é igual");
    } else{
        printf("O Jogador 2 é o vencedor! Ele tem o maior PIB per capita.");
    }
    return 0;
}
