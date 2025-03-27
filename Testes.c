#include <stdio.h>

#define LINHA 10
#define COLUNA 10
#define habilidade_linha 3
#define habilidade_coluna 5

void exibir_tabuleiro(int tabuleiro[LINHA][COLUNA]){
    for (int i = 0; i < LINHA; i ++) {
        for (int j = 0; j < COLUNA; j ++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
void exibir_cone(int cone[habilidade_linha][habilidade_coluna]) {
    for (int i = 0; i < habilidade_linha; i ++) {
        for (int j = 0; j < habilidade_coluna; j ++) {
            cone[i][j] = 0;
        }
    }
    if (ponto_origemi >= 0 && ponto_origemi < habilidade_linha && ponto_origemj >= 0 && ponto_origemj < habilidade_coluna) {
        cone[ponto_origemi][ponto_origemj] = 1;
        if (ponto_origemi < habilidade_linha) {
            cone[ponto_origemi + 1][ponto_origemj] = 1;
            if (ponto_origemi - 1 >= 0) cone[ponto_origemi + 1][ponto_origemj - 1] = 1;
            if (ponto_origemi + 1 < habilidade_coluna) cone[ponto_origemi + 1][ponto_origemj + 1] = 1;
        }
    }
}

int main () {

    int tabuleiro[LINHA][COLUNA] = {0};

    exibir_tabuleiro(tabuleiro);

    return 0;
}