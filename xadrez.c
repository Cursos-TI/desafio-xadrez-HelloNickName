#include <stdio.h>

// Bispo: 5 casas na diagonal superior direita
void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    moverBispo(casas - 1);
}

// Torre: 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha: 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Cavalo: 1 L para cima à direita
void moverCavalo() {
    int movimentosDireita = 0;
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            continue;
        }
        while (movimentosDireita < 1) {
            printf("Direita\n");
            movimentosDireita++;
            break;
        }
    }
}

int main() {
    printf("=== Desafio MateCheck - Nível Mestre ===\n");

    printf("\nBispo:\n");
    moverBispo(5);

    printf("\nTorre:\n");
    moverTorre(5);

    printf("\nRainha:\n");
    moverRainha(8);

    printf("\nCavalo:\n");
    moverCavalo();

    return 0;
}
