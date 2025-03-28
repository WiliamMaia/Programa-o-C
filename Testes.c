#include <stdio.h>

#define LINHA 10
#define COLUNA 10
#define habilidade_linha 3
#define habilidade_coluna 5

// Função para exibir o tabuleiro
void exibir_tabuleiro(int tabuleiro[LINHA][COLUNA]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar o cone dentro do tabuleiro
void aplicar_cone(int tabuleiro[LINHA][COLUNA], int ponto_origemi, int ponto_origemj) {
    
    // Validação da origem
    if (ponto_origemi < 0 || ponto_origemi >= LINHA || ponto_origemj < 0 || ponto_origemj >= COLUNA) {
        printf("Ponto de origem inválido!\n");
        return;
    }

    // Aplicando a forma do cone no tabuleiro
    tabuleiro[ponto_origemi][ponto_origemj] = 1; // Origem do cone

    if (ponto_origemi + 1 < LINHA) { 
        tabuleiro[ponto_origemi + 1][ponto_origemj] = 1;  // Desce uma linha
        if (ponto_origemj - 1 >= 0) tabuleiro[ponto_origemi + 1][ponto_origemj - 1] = 1; // Esquerda
        if (ponto_origemj + 1 < COLUNA) tabuleiro[ponto_origemi + 1][ponto_origemj + 1] = 1; // Direita
    }

    if (ponto_origemi + 2 < LINHA) { 
        tabuleiro[ponto_origemi + 2][ponto_origemj] = 1;  // Desce mais uma linha
        if (ponto_origemj - 2 >= 0) tabuleiro[ponto_origemi + 2][ponto_origemj - 2] = 1; // Mais à esquerda
        if (ponto_origemj - 1 >= 0) tabuleiro[ponto_origemi + 2][ponto_origemj - 1] = 1; // Esquerda menor
        if (ponto_origemj + 1 < COLUNA) tabuleiro[ponto_origemi + 2][ponto_origemj + 1] = 1; // Direita menor
        if (ponto_origemj + 2 < COLUNA) tabuleiro[ponto_origemi + 2][ponto_origemj + 2] = 1; // Mais à direita
    }
}

int main() {
    int tabuleiro[LINHA][COLUNA] = {0}; // Inicializa o tabuleiro com zeros

    aplicar_cone(tabuleiro, 0, 1);
    exibir_tabuleiro(tabuleiro);

    return 0;
}
