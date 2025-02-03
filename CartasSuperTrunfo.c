#include <stdio.h>
#include <string.h>

int main() {
    char letra; // letra do estado (a ser utilizado no código da carta)
    int numero; // número da cidade (a ser utilizado no código da carta)
    int populacao, pturistico; // informações da cidade (população e os pontos turísticos)
    char estado[100]; // informações da carta (nome do estado)
    char cidade[100]; // informações da carta (nome da cidade)
    float pib, area; // PIB e área da cidade

    printf("Digite o nome do estado: "); // o usuário é solicitado a enviar o nome do estado
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o nome da cidade: "); // o usuário é solicitado a enviar o nome da cidade
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("\nDigite o código da carta na ordem letra (do estado) e número (da cidade): "); // o usuário é solicitado a colocar o código no formato de letra e número (A1, A2, etc)
    scanf(" %c %d", &letra, &numero);
    printf("A sua carta escolhida foi %c%d", letra, numero);

    printf("\nInsira a população e os pontos turísticos da sua cidade: "); // o usuário é solicitado a colocar informações adicionais
    scanf("%d %d", &populacao, &pturistico);

    printf("Insira a área e o PIB da sua cidade: "); // o usuário é solicitado a colocar informações adicionais
    scanf("%f %f", &area, &pib);

    /*Ao colocar o que se pede, o prompt exibirá as seguintes informações:
    Código da Carta (nome)
    População
    Área
    Pontos turísticos
    PIB
    */

    printf("\nSua carta %c%d contém: \numa população de %d pessoas \numa área de %.2f km² \n%d pontos turísticos \nPIB de %.4f", letra, numero, populacao, area, pturistico, pib);

    return 0;
}