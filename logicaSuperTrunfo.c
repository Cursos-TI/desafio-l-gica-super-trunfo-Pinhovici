#include <stdio.h>



int main (){

    int escolhadecisao; // switch

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

    // Configuração da primeira carta
    printf("Bem-vindo jogador! Vamos configurar a primeira carta:\n");

    printf("\nDigite o nome do estado: ");
    scanf("%49s", Estado1);

    printf("Digite o código da carta: \n");
    scanf("%49s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", nomecidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt1);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    pibcapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + npt1 + pibcapita1 + inversodensi1;

    // Configuração da segunda carta
    printf("\nExcelente! Agora configure a segunda carta:\n");

    printf("\nDigite o nome do estado: ");
    scanf("%49s", Estado2);

    printf("Digite o código da carta: \n");
    scanf("%49s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", nomecidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt2);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    pibcapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + pibcapita2 + inversodensi2;

    // Exibição das cartas
    printf("\n===== Primeira carta =====\n");
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s - Estado: %s\n", nomecidade1, Estado1);
    printf("Número de pontos turísticos: %d\n", npt1);
    printf("Área total: %.2f km²\n", area1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade demográfica: %.3f hab/km²\n", densidade1);
    printf("PIB per capita: %.3f\n", pibcapita1);
    printf("Super Poder: %.3f\n", superpoder1);

    printf("\n===== Segunda carta =====\n");
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s - Estado: %s\n", nomecidade2, Estado2);
    printf("Número de pontos turísticos: %d\n", npt2);
    printf("Área total: %.2f km²\n", area2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade demográfica: %.3f hab/km²\n", densidade2);
    printf("PIB per capita: %.3f\n", pibcapita2);
    printf("Super Poder: %.3f\n", superpoder2);

        //menu interativo:

            printf("=== Escolha o que será avaliado === \n");
            printf("\n1. Pontos Turísticos\n");
            printf("2. Área total\n");
            printf("3. População\n");
            printf("4. PIB\n");
            printf("5. Densidade Demográfica\n");
            printf("6. Pib per capita\n");
            printf("7. Super Poder\n");
                scanf("%d", & escolhadecisao);

    switch (escolhadecisao)
    {
    case 1: //Pontos turísticos

        printf("Pontos turísticos de %s é: %d, pontos turísticos de %s é: %d\n", Estado1, npt1, Estado2, npt2);

        if(npt1=npt2){;
            printf("### Empatou! ###");} 
        else if (npt1 > npt2){
            printf("%s venceu\n", Estado1);
            pontoscarta1++;
        }else{ 
            printf("%s venceu\n", Estado2);
            pontoscarta2++;
        }

    break;

        case 2: // Área total

        printf("Área total de %s é: %f, área total de %s é: %f \n", Estado1, area1, Estado2, area2);

        if(area1=area2){;
            printf("### Empatou! ###");} 
        else if(area1 > area2){
            printf("%s venceu\n", Estado1);
            pontoscarta1++;
    
        }else{
            printf("%s venceu\n", Estado2);
            pontoscarta2++;
        }
    break;

        case 3: //População

        printf("População de %s é: %d, População de %s é: %d \n",Estado1,populacao1,Estado2,populacao2);

        if(populacao1=populacao2){;
            printf("### Empatou! ###");} 
        else if (populacao1 > populacao2){
            printf("%s venceu\n", Estado1);
            pontoscarta1++;
        }else{ 
            printf("%s venceu\n", Estado2);
            pontoscarta2++;
    }
    break;

        case 4: //PIB

        printf("PIB de %s é: %f, PIB de %s é: %f \n",Estado1,pib1,Estado2,pib2);

         if(pib1=pib2){;
            printf("### Empatou! ###");} 
        else if (pib1 > pib2){
            printf("%s venceu\n", Estado1);
            pontoscarta1++;
        }else{ 
            printf("%s venceu\n", Estado2);
            pontoscarta2++;
        }

    break;

        case 5: //Densidade demográfica já invertida

        printf("Densidade demográfica de %s é: %.3f, Densidade demográfica de %s é: %.3f \n",Estado1,densidade1,Estado2,densidade2);

        if(densidade1=densidade2){;
            printf("### Empatou! ###");} 
        else if(densidade1 < densidade2){
            printf("%s venceu\n", Estado1);
            pontoscarta1++;
        }else{
            printf("%s venceu\n", Estado2);
            pontoscarta2++;
        }
        
    break;
    
        case 6: // PIB per capita

        printf("Pib per capita de %s é: %.3f, Pib per capita de %s é: %.3f \n",Estado1,pibcapita1,Estado2,pibcapita2);

        if(pibcapita1=pibcapita2){;
            printf("### Empatou! ###");} 
        else if (pibcapita1 > pibcapita2){
            printf("%s venceu\n", Estado1);
            pontoscarta1++;
        }else{ 
            printf("%s venceu\n", Estado2);
            pontoscarta2++;
        }
    break;
    case 7: // Super Poder

        printf("Super Poder de %s é: %d, Super Poder de %s é: %d \n",Estado1,superpoder1,Estado2,superpoder2);

        if(superpoder1=superpoder2){;
            printf("### Empatou! ###");} 
        else if (superpoder1 > superpoder2){
            printf("%s venceu\n", Estado1);
            pontoscarta1++;
        }else {
            printf("%s venceu\n", Estado2);
            pontoscarta2++;
        }
    break;
    default: //em caso de opção errada no menu interativo
    printf("### Opção inválida ###\n");
    break;
    }

    return 0;

}
