#include <stdio.h>

// Função para calcular densidade populacional
float calcular_densidade(unsigned long int populacao, float area) {
    return (area == 0) ? 0 : populacao / area;
}

int main() {
    // Variáveis das cartas
    char estado1[50], codigocarta1[50], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1, inversodensidade1, superpoder1;
    int npt1;

    char estado2[50], codigocarta2[50], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2, inversodensidade2, superpoder2;
    int npt2;

    // Cadastro da primeira carta
    printf("=== Configuração da Primeira Carta ===\n");
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Código: "); scanf(" %[^\n]", codigocarta1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &npt1);

    // Cadastro da segunda carta
    printf("\n=== Configuração da Segunda Carta ===\n");
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Código: "); scanf(" %[^\n]", codigocarta2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &npt2);

    // Cálculo de atributos derivados
    densidade1 = calcular_densidade(populacao1, area1);
    densidade2 = calcular_densidade(populacao2, area2);

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    inversodensidade1 = (densidade1 > 0) ? 1 / densidade1 : 0;
    inversodensidade2 = (densidade2 > 0) ? 1 / densidade2 : 0;

    superpoder1 = populacao1 + area1 + pib1 + npt1 + pib_per_capita1 + inversodensidade1;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + pib_per_capita2 + inversodensidade2;

    // Menu principal
    char op;
    do {
        printf("\n=== MENU ===\n1 - Jogar\n2 - Regras\n0 - Sair\nEscolha: ");
        scanf(" %c", &op);

        switch(op) {
            case '2':
                printf("\nREGRAS:\n- Escolha dois atributos diferentes para comparar.\n- O maior valor vence, exceto densidade, onde vence o menor.\n- Soma dos atributos define o vencedor.\n- Empate soma 1 ponto para cada carta.\n");
                break;

            case '1': {
                int pontos_carta1 = 0, pontos_carta2 = 0;
                int atributo1, atributo2;

                while(pontos_carta1 < 3 && pontos_carta2 < 3) {
                    // Escolha do primeiro atributo
                    printf("\nEscolha o primeiro atributo:\n1-População\n2-Área\n3-PIB\n4-Pontos Turísticos\n5-Densidade\n6-PIB per Capita\n7-Super Poder\nEscolha: ");
                    scanf("%d", &atributo1);

                    // Escolha do segundo atributo (não pode ser igual ao primeiro)
                    do {
                        printf("Escolha o segundo atributo (diferente do primeiro): ");
                        scanf("%d", &atributo2);
                    } while(atributo2 == atributo1);

                    // Recupera os valores dos atributos
                    float val1a, val1b, val2a, val2b;
                    switch(atributo1){
                        case 1: val1a=populacao1; val1b=populacao2; break;
                        case 2: val1a=area1; val1b=area2; break;
                        case 3: val1a=pib1; val1b=pib2; break;
                        case 4: val1a=npt1; val1b=npt2; break;
                        case 5: val1a=densidade1; val1b=densidade2; break;
                        case 6: val1a=pib_per_capita1; val1b=pib_per_capita2; break;
                        case 7: val1a=superpoder1; val1b=superpoder2; break;
                    }
                    switch(atributo2){
                        case 1: val2a=populacao1; val2b=populacao2; break;
                        case 2: val2a=area1; val2b=area2; break;
                        case 3: val2a=pib1; val2b=pib2; break;
                        case 4: val2a=npt1; val2b=npt2; break;
                        case 5: val2a=densidade1; val2b=densidade2; break;
                        case 6: val2a=pib_per_capita1; val2b=pib_per_capita2; break;
                        case 7: val2a=superpoder1; val2b=superpoder2; break;
                    }

                    // Ajusta densidade (menor vence)
                    if(atributo1 == 5) val1a = -val1a; val1b = -val1b;
                    if(atributo2 == 5) val2a = -val2a; val2b = -val2b;

                    float soma1 = val1a + val2a;
                    float soma2 = val1b + val2b;

                    printf("\n=== Resultado da Rodada ===\n");
                    printf("%s vs %s\n", cidade1, cidade2);
                    printf("Atributos escolhidos: %d e %d\n", atributo1, atributo2);
                    printf("Valores Carta 1: %.2f + %.2f = %.2f\n", val1a, val2a, soma1);
                    printf("Valores Carta 2: %.2f + %.2f = %.2f\n", val1b, val2b, soma2);

                    if(soma1 > soma2) { pontos_carta1++; printf("Carta 1 venceu!\n"); }
                    else if(soma2 > soma1) { pontos_carta2++; printf("Carta 2 venceu!\n"); }
                    else { pontos_carta1++; pontos_carta2++; printf("Empate!\n"); }

                    printf("Placar: Carta1=%d | Carta2=%d\n", pontos_carta1, pontos_carta2);
                }

                if(pontos_carta1 > pontos_carta2) printf("\n🏆 Carta 1 venceu o jogo!\n");
                else if(pontos_carta2 > pontos_carta1) printf("\n🏆 Carta 2 venceu o jogo!\n");
                else printf("\n🤝 Empate final!\n");

                break;
            }

            case '0': 
                printf("Saindo do jogo.\n"); 
                break;

            default: 
                printf("Opção inválida!\n");
        }

    } while(op != '0');

    return 0;
}
