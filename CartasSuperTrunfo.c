#include <stdio.h>

int main() {

    //Variáveis da primeira Carta
    char estado1[50];
    char codigo1[15];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosT1; // Variável de pontos turísticos

    //Variáveis da Segunda Carta
    char estado2[50];
    char codigo2[15];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosT2; // Variável de pontos turísticos

    printf("Insira as informações da primeira carta\n\n"); //Informando o usurário o objetivo da coleta de informações

    //Coletando informaçôes para a primeira carta
    printf("Digite o nome do estado: ");
    scanf(" %s", estado1);
    printf("Digite o código do estado: ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite quantos pontos turísticos a cidade têm: ");
    scanf(" %d", &pontosT1);



//---------------------------------------------------------------------------

    printf("\n\nInsira as informações da segunda carta\n\n"); //Informando o usurário o objetivo da coleta de informações

    //Coletando informaçôes para a segunda carta
    printf("Digite o nome do estado: ");
    scanf(" %s", estado2);
    printf("Digite o código do estado: ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("Digite quantos pontos turísticos a cidade têm: ");
    scanf(" %d", &pontosT2);


    //---------------------------------------------------------------------------

    //Exibindo ambas as cartas

    printf("\n\n   Carta 1\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n\n", pontosT1);

    printf("---------------------------------------\n");

    printf("\n\n   Carta 2\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n\n", pontosT2);

    return 0;
}