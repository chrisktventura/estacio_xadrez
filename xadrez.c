#include <stdio.h>

// Função Recursiva - Torre

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}


// Função Recursiva - Rainha

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}


// Função Recursiva com Loops Aninhados - Bispo

void moverBispo(int passos, int atual) {
    if (atual >= passos) return;

    // Loop aninhado para simular movimento diagonal (Cima + Direita)
    for (int i = 0; i < 1; i++) { // Loop vertical (1 passo)
        for (int j = 0; j < 1; j++) { // Loop horizontal (1 passo)
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos, atual + 1);
}

// Movimento do Cavalo (Loops Aninhados com break/continue)

void moverCavalo() {
    int movimentos = 1; // só 1 movimento em L por vez (duas casas cima + uma direita)

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        for (int passo = 1; passo <= 3; passo++) {
            if (passo <= 2) {
                printf("Cima\n");
                continue; // pula para próxima iteração se ainda não fez os 2 passos pra cima
            }
            if (passo == 3) {
                printf("Direita\n");
                break; // encerra esse movimento em L
            }
        }
    }
}

// Função Principal

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 0);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo
    moverCavalo();

    return 0;
}
