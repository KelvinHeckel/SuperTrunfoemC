#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Dados carta 1
    char cidade1[20] = "Fortaleza";
    char estado1[20] = "Cear�";
    short int codigo1 = 1;
    float populacao1 = 2.429;
    float area1 = 313.8;
    float pib1 = 73;
    int pontos1 = 5;

    // Dados carta 2
    char cidade2[20] = "Curitiba";
    char estado2[20] = "Paran�";
    short int codigo2 = 2;
    float populacao2 = 1.429;
    float area2 = 413.8;
    float pib2 = 83;
    int pontos2 = 7;

    // C�lculo da densidade populacional
    float densidade1 = populacao1 * 1e6 / area1;
    float densidade2 = populacao2 * 1e6 / area2;

    // C�lculo PIB per capita
    float percapita1 = pib1 * 1e6 / populacao1;
    float percapita2 = pib2 * 1e6 / populacao2;

    // C�lculo super poder
    float somaPoder1, somaPoder2;
    somaPoder1 = populacao1 + area1 + pib1 + pontos1;
    somaPoder2 = populacao2 + area2 + pib2 + pontos2;

    // Impress�o carta 1
    printf("---JOGO SUPER TRUNFO---\n\n");

    printf("Carta 1\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("C�digo: %d\n", codigo1);
    printf("Popula��o: %.3f milh�es \n", populacao1);
    printf("�rea: %.2f milh�es de km� \n", area1);
    printf("PIB: %.2f milh�es \n", pib1);
    printf("Pontos: %d \n", pontos1);
    printf("Densidade populacional: %.2f habitantes por km� \n", densidade1);
    printf("PIB per Capita: %.2f mil reais \n", percapita1);
    if (somaPoder1 > somaPoder2)
    {
        printf("O Resultado Super Poder da Carta 1: VENCEU\n\n");
    }
    else if (somaPoder1 < somaPoder2)
    {
        printf("O Resultado Super Poder da Carta 1: PERDEU\n\n");
    }
    else
    {
        printf("O Resultado Super Poder da Carta 1: EMPATOU\n\n");
    }

    // Impress�o carta 2
    printf("Carta 2\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("C�digo: %d\n", codigo2);
    printf("Popula��o: %.3f milh�es \n", populacao2);
    printf("�rea: %.2f milh�es de km� \n", area2);
    printf("PIB: %.2f milh�es \n", pib2);
    printf("Pontos: %d \n", pontos2);
    printf("Densidade populacional: %.2f habitantes por km� \n ", densidade2);
    printf("PIB per Capita: %.2f mil reais \n", percapita2);
    if (somaPoder2 > somaPoder1)
    {
        printf("O Resultado Super Poder da Carta 2: VENCEU\n\n");
    }
    else if (somaPoder2 < somaPoder1)
    {
        printf("O Resultado Super Poder da Carta 2: PERDEU\n\n");
    }
    else
    {
        printf("O Resultado Super Poder da Carta 2: EMPATOU\n\n");
    }
    // Escolha jogador para a compara��o
    int escolhaJogador;

    printf("---JOGO SUPER TRUNFO---\n\n");
    printf("Escolha qual atributo quer comparar:\n\n");
    printf("1. Popula��o\n");
    printf("2. �rea\n");
    printf("3. PIB\n");
    printf("4. Pontos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n ");
    printf("Escolha uma op��o: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        printf("Escolha jogador: Popula��o\n");
        break;
    case 2:
        printf("Escolha jogador: �rea\n");
        break;
    case 3:
        printf("Escolha jogador: PIB\n");
        break;
    case 4:
        printf("Escolha jogador: Pontos\n");
        break;
    case 5:
        printf("Escolha jogador: Densidade populacional\n");
        break;
    case 6:
        printf("Escolha jogador: PIB per capita\n");
        break;

    default:
        printf("Escolha inv�lida.\n");
        break;
    }

    // Resultado para quem ganhou Popula��o

    if (escolhaJogador == 1)
    {
        if (populacao1 > populacao2)
        {
            printf("##Carta 1 ganhou##\n\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("###Carta 2 ganhou###\n\n");
        }
        else
        {
            printf("##Empate##\n\n");
        }
    }

    // Resultado para quem ganhou �rea
    if (escolhaJogador == 2)
    {
        if (area1 > area2)
        {
            printf("###Carta 1 ganhou###\n\n");
        }
        else if (area1 < area2)
        {
            printf("###Carta 2 ganhou###\n\n");
        }
        else
        {
            printf("###Empate###\n\n");
        }
    }

    // Resultado para quem ganhou PIB
    if (escolhaJogador == 3)
    {
        if (pib1 > pib2)
        {
            printf("###Carta 1 ganhou###\n\n");
        }
        else if (pib1 < pib2)
        {
            printf("###Carta 2 ganhou###\n\n");
        }
        else
        {
            printf("##Empate##\n\n");
        }
    }

    // Resultado para quem ganhou Pontos
    if (escolhaJogador == 4)
    {
        if (pontos1 > pontos2)
        {
            printf("###Carta 1 ganhou###\n\n");
        }
        else if (pontos1 < pontos2)
        {
            printf("###Carta 2 ganhou###\n\n");
        }
        else
        {
            printf("###Empate###\n\n");
        }
    }

    // Resultado para quem ganhou Densidade Populacional
    if (escolhaJogador == 5)
    {
        if (densidade1 < densidade2)
        {
            printf("###Carta 1 ganhou###\n\n");
        }
        else if (densidade1 > densidade2)
        {
            printf("###Carta 2 ganhou###\n\n");
        }
        else
        {
            printf("###Empate###\n\n");
        }
    }

    // Resultado para quem ganhou PIB Per Capita
    if (escolhaJogador == 6)
    {
        if (percapita1 > percapita2)
        {
            printf("###Carta 1 ganhou###\n\n");
        }
        else if (percapita1 < percapita2)
        {
            printf("###Carta 2 ganhou###\n\n");
        }
        else
        {
            printf("###Empate###\n\n");
        }
    }

    return 0;
}