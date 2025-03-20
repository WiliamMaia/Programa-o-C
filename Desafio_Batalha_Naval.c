#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

# define tamanho 10 // Aqui defini uma variável para o tamanho do tabuleiro  com o valor '10', assim quando aplicar o tamanho tanto na horizontal quanto na vertical será um quadrado de tamanho 10

void exibicao_tabuleiro (int tabuleiro [tamanho][tamanho]) {   //  Aqui declaro uma recursividade para exibir o tabuleiro
    printf("   A B C D E F G H I J\n");  // Aqui quero exibir o cabeçalho do tabuleiro na horizontal para melhor coordenadas, precisei colocar 3 espaços antes do A para melhor alinjamento mas inda estou com problemas na linha 10
    for (int x = 0; x < tamanho; x ++) {  //  Aqui declaro um loop para as colunas serem criadas
        printf("%d:", x + 1);   // Aqui estou tentando enumerar cada linha com um numeral, como se começa com '0' pedi para que somasse + 1 a fim de mostrar de 1 - 10
        for (int y = 0; y < tamanho; y ++) {  //  Aqui declaro outro loop para serem creiadas as colunas
            printf(" %d", tabuleiro[x][y]);
        }
        printf("\n");
    }
}
void navio_horizontal (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  // Aqui declaro uma recursividade para dicionar um navio na horizontal, precisei declarar variáveis linha e coluna para apliccar as modificações
    for (int x = 0; x < 3; x ++) {  //  Aqui declaro um loop para aplicar o navio que ocupa 3 posições na horizontal (x)
        tabuleiro[linha][coluna + x] = 3;  //  Aqui será aplicado 0 '3' nas colunas e na linha
    }
}
void navio_vertical (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  //  Aqui declaro a recursividade para o navio na vertical
    for (int y = 0; y < 3; y ++) {  //  Aqui declaro um loop para aplicar o navio na vertical (y) que ocupará também 3 posições
        tabuleiro[linha + y][coluna] = 3;   //  Aqui será aplicado p '3' nas linhas e colunas
    }
}

int main() {

    int tabuleiro[tamanho][tamanho] = {0};   //  Aqui quero iniciar o tabuleiro com todos os valores '0' para serem representados por àgua

    navio_horizontal(tabuleiro, 2, 2);  //  Aqui chamo a recursividade do navio na horizontal, coloquei como posição inicial 'C3' no tabuleiro e ocupou 'C3, D3 e E3'
    navio_vertical(tabuleiro, 6, 6);    //  Aqui chamo a recursividade do navio na vertical, coloquei como posição inicial 'G7' no tabuleiro e ocupou 'G7, G8 e G9'
    exibicao_tabuleiro(tabuleiro);   //  Aqui chamo a recursividade da exibição do tabuleiro

    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
