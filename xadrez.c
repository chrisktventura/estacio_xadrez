#include <stdio.h>

int main()
{
    // Movimento da Torre (FOR)
    // A Torre move-se em linha reta. Aqui, simulamos 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++)
    {
        printf("Direita\n");
    }
    // Movimento do Bispo (WHILE)
    // O Bispo move-se na diagonal. Aqui, simulamos 5 casas na diagonal para cima e à direita.
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo)
    {
        printf("Cima Direita\n");
        i++;
    }
    // Movimento da Rainha (DO-WHILE)
    // A Rainha pode mover-se em todas as direções. Aqui, simulamos 8 casas para a esquerda.
    int casasRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);
    // Movimento do Cavalo (FOR + WHILE)
    // O Cavalo move-se em "L": duas casas para baixo e uma para a esquerda.
    // Usamos um loop FOR externo para os movimentos para baixo
    // E um loop WHILE interno para o movimento para a esquerda.
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;
    int passo;

    printf("\nMovimento do Cavalo:\n");

    for (passo = 0; passo < movimentosBaixo; passo++)
    {
        printf("Baixo\n");
    }

    int k = 0;
    while (k < movimentosEsquerda)
    {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}