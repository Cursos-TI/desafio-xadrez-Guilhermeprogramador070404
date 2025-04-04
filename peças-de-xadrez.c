#include <stdio.h>
int main() {

    int i = 0;
    int movimentoCompleto = 1;

    // mover a torre 5 casas para a direita
    printf("Movimentação da Torre!\n");
    while (i < 5)
    {
        printf("Direita\n"); 
        i++;

    }
    printf("\n");

    // Mover o Bispo 5 casas na diagonal
    printf("Movimentação do Bispo!\n");
    do
    {
        printf("Cima, Direita\n");
        i++;
    } while (i < 10);
    printf("\n");

    // Mover a Rainha 8 casas para a esquerda
    printf("Movimentação da Rainha!\n");
    for (i = 0; i < 8; i++)
    {
        printf("Esquerda\n");

    }
    printf("\n");

    // Mover o Cavalo 2 casas para baixo e 1 para direita
    printf("Movimentação do Cavalo!\n");
    while (movimentoCompleto--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        i++;
    }

    
    return 0;
}