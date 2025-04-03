#include <stdio.h>
int main() {
    // mover a torre 5 casas para a direita
    int i = 0;
    while (i < 5)
    {
        printf("Direita\n"); 
        i++;

    }

    // Mover o Bispo 5 casas na diagonal
    do
    {
        printf("Cima, Direita\n");
        i++;
    } while (i < 10);

    // Mover a Rainha 8 casas para a esquerda
    for (i = 0; i < 8; i++)
    {
        printf("Esquerda\n");

    }
    return 0;
}