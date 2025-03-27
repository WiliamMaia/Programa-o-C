#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

# define tamanho 10 // Aqui defini uma variável para o tamanho do tabuleiro  com o valor '10', assim quando aplicar o tamanho tanto na horizontal quanto na vertical será um quadrado de tamanho 10

void exibicao_tabuleiro (int tabuleiro [tamanho][tamanho]) {   //  Aqui declaro uma recursividade para exibir o tabuleiro
    printf("    A B C D E F G H I J\n");  // Aqui quero exibir o cabeçalho do tabuleiro na horizontal para melhor coordenadas, precisei colocar 4 espaços antes do A para melhor alinjamento mas inda estou com problemas na linha 10
    for (int x = 0; x < tamanho; x ++) {  //  Aqui declaro um loop para as colunas serem criadas
        printf("%d: ", x);   // Aqui estou tentando enumerar cada linha com um numeral a partir de '0', para melhor alinhamento do tabuleiro e escolha das coordenadas
        for (int y = 0; y < tamanho; y ++) {  //  Aqui declaro outro loop para serem creiadas as colunas
            printf(" %d", tabuleiro[x][y]);
        }
        printf("\n");
    }
}
void navio_horizontal (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  // Aqui declaro uma recursividade para dicionar um navio na horizontal, precisei declarar variáveis linha e coluna para apliccar as modificações
    if(coluna + 2 < tamanho) {  // Aqui aplico uma condição para não acontecer de posicionar um navio em um local onde ultrapasse os limites do tabuleiro
        for (int x = 0; x < 3; x ++) {  //  Aqui inicio a condição para não sobrepor outro navio
            if (tabuleiro[linha][coluna + x] == 3){
                printf("O navio da horixontal não pode ser posicionado em (%d, %d) por ja estar ocupado por um outro !\n", linha, coluna);
            }
        }
    for (int x = 0; x < 3; x ++) {  //  Aqui declaro um loop para aplicar o navio que ocupa 3 posições na horizontal (x)
        tabuleiro[linha][coluna + x] = 3;  //  Aqui será aplicado 0 '3' nas colunas e na linha
        }
    } else {  // caso a condição seja acionada
        printf("O navio da horixontal não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
    }
}
void navio_vertical (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  //  Aqui declaro a recursividade para o navio na vertical
    if (linha + 2 < tamanho) {  // Aqui aplico uma condição para não acontecer de posicionar um navio em um local onde ultrapasse os limites do tabuleiro
        for (int y = 0; y < 3; y ++) {  //  Aqui inicio a condição para não sobrepor outro navio
            if (tabuleiro[linha + y][coluna] == 3){
                printf("O navio da vertical não pode ser posicionado em (%d, %d) por ja estar ocupado por um outro !\n", linha, coluna);
            }
        }    
    for (int y = 0; y < 3; y ++) {  //  Aqui declaro um loop para aplicar o navio na vertical (y) que ocupará também 3 posições
        tabuleiro[linha + y][coluna] = 3;   //  Aqui será aplicado p '3' nas linhas e colunas
        }
    } else {  // caso a condição seja acionada
        printf("O navio da vertical não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
    }
}
void navio_diagonal1 (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  // Aqui declaro a recursividade para o navio na diagonal do nivel aventuriro
    if ((linha + 2 < tamanho) && (coluna + 2 < tamanho)) {  // Aqui aplico uma condição para não acontecer de posicionar um navio em um local onde ultrapasse os limites do tabuleiro
        for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui inicio a condição para não sobrepor outro navio
            if (tabuleiro[linha + y][coluna + x] == 3){
                printf("O navio da diagonal 1 não pode ser posicionado em (%d, %d) por ja estar ocupado por um outro !\n", linha, coluna);
            }
        }    
    for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui declaro um loop para aplicar o navio na diagonal que ocupará também 3 posições
        tabuleiro[linha + y][coluna + x] = 3;   //  Aqui será aplicado p '3' nas linhas e colunas, estou aumentando a 'coluna' e a 'linha' para aplicar a diagonal 
        }
    } else {  // caso a condição seja acionada
        printf("O navio da diagonal 1 não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
    }
}
void navio_diagonal2 (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  // Aqui declaro a recursividade para o navio na diagonal do nivel aventuriro
    if ((linha + 2 < tamanho) && (coluna - 2 >= 0)) {  // Aqui aplico uma condição para não acontecer de posicionar um navio em um local onde ultrapasse os limites do tabuleiro
        for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui inicio a condição para não sobrepor outro navio
            if (tabuleiro[linha + y][coluna - x] == 3){
                printf("O navio da diagonal 2 não pode ser posicionado em (%d, %d) por ja estar ocupado por um outro !\n", linha, coluna);
            }
        }    
    for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui declaro um loop para aplicar o navio na diagonal que ocupará também 3 posições
        tabuleiro[linha + y][coluna - x] = 3;   //  Aqui será aplicado p '3' nas linhas e colunas, estou negativando a 'coluna' enquanto aumento a 'linha' para aplicar a diagonal 
        }
    } else {  // caso a condição seja acionada
        printf("O navio da diagonal 2 não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
    }
}

int main() {

    int tabuleiro[tamanho][tamanho] = {0};   //  Aqui quero iniciar o tabuleiro com todos os valores '0' para serem representados por àgua

    navio_horizontal(tabuleiro, 2, 2);  //  Aqui chamo a recursividade do navio na horizontal, coloquei como posição inicial 'C2' no tabuleiro e ocupou 'C2, D2 e E2'
    navio_vertical(tabuleiro, 6, 6);    //  Aqui chamo a recursividade do navio na vertical, coloquei como posição inicial 'G6' no tabuleiro e ocupou 'G6, G7 e G8'
    navio_diagonal1(tabuleiro, 1, 7);    //  Aqui chamo a recursividade do navio na diagonal, coloquei como posição inicial 'H1' no tabuleiro e ocupou 'H1, I2 e J3'
    navio_diagonal2(tabuleiro, 4, 3);    //  Aqui chamo a recursividade do navio na diagonal, coloquei como posição inicial 'D4' no tabuleiro e ocupou 'D4, C5 e B6'
    exibicao_tabuleiro(tabuleiro);   //  Aqui chamo a recursividade da exibição do tabuleiro

    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
