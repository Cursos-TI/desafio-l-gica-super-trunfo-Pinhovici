#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
// Carta 1
    
    char Estado1[50];
    char codigocarta1[50];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int npt1; // número de pontos turísticos
    float densidade1, pibcapita1, inversodensi1;
    float superpoder1;
    int pontoscarta1 = 0;

// Carta 2

    char Estado2[50];
    char codigocarta2[50];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int npt2; // número de pontos turísticos
    float densidade2, pibcapita2, inversodensi2;
    float superpoder2;
    int pontoscarta2 = 0;

// Comparações
    int resulpopu, resularea, resulpib, resulnpt,
        resuldensi, resulpibcap, resuldensidem, resulsuperpoder;
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
 // Configuração da primeira carta
    printf("Bem-vindo jogador! Vamos configurar a primeira carta:\n");

    printf("\nDigite o nome do estado: ");
    scanf("%49s", Estado1);

    printf("Digite o código da carta: ");
    scanf("%49s", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomecidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt1);

// Cálculos carta 1
    
    densidade1 = (float)populacao1 / area1;
    pibcapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + npt1 + pibcapita1 + inversodensi1;

// Configuração da segunda carta
    
    printf("\nExcelente! Agora configure a segunda carta:\n");

    printf("\nDigite o nome do estado: ");
    scanf("%49s", Estado2);

    printf("Digite o código da carta: ");
    scanf("%49s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomecidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt2);

// Cálculos carta 2
    
    densidade2 = (float)populacao2 / area2;
    pibcapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + pibcapita2 + inversodensi2;
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (area1 > area2){
        printf("%s venceu\n", Estado1);
        pontoscarta1++;
    }else{
        printf("%s venceu\n", Estado2);
        pontoscarta2++;
    }

    if (densidade1 < densidade2){
        printf("%s venceu\n", Estado1);
        pontoscarta1++;
    }else{
        printf("%s venceu\n", Estado2);
        pontoscarta2++;
    }

    if (npt1 > npt2){
        printf("%s venceu\n", Estado1);
        pontoscarta1++;
    }else{ 
        printf("%s venceu\n", Estado2);
        pontoscarta2++;
    }

    if (pib1 > pib2){
        printf("%s venceu\n", Estado1);
        pontoscarta1++;
    }else{ 
        printf("%s venceu\n", Estado2);
        pontoscarta2++;
    }

    if (pibcapita1 > pibcapita2){
        printf("%s venceu\n", Estado1);
        pontoscarta1++;
    }else{ 
        printf("%s venceu\n", Estado2);
        pontoscarta2++;
    }

    if (populacao1 > populacao2){
        printf("%s venceu\n", Estado1);
        pontoscarta1++;
    }else{ 
        printf("%s venceu\n", Estado2);
        pontoscarta2++;
    }

    if (superpoder1 > superpoder2){
        printf("%s venceu\n", Estado1);
    }else {
        printf("%s venceu\n", Estado2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    //Total de pontos

        printf("\n***** Pontuação total *****\n");
        printf("%s: %d pontos\n", Estado1, pontoscarta1);
        printf("%s: %d pontos\n", Estado2, pontoscarta2);

    //carta vencedora

        if (pontoscarta1 > pontoscarta2){
            printf("A carta vencedora é: %s!\n");
        }else if (pontoscarta2 > pontoscarta1){
            printf("A carta vencedora é: %s!\n", Estado2);
        }else {
            printf("Empate!\n");
        }
    
    return 0;
}
