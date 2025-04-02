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
                return;
            }
        }
    for (int x = 0; x < 3; x ++) {  //  Aqui declaro um loop para aplicar o navio que ocupa 3 posições na horizontal (x)
        tabuleiro[linha][coluna + x] = 3;  //  Aqui será aplicado 0 '3' nas colunas e na linha
        }
    } else {  // caso a condição seja acionada
        printf("O navio da horixontal não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
        return;
    }
}
void navio_vertical (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  //  Aqui declaro a recursividade para o navio na vertical
    if (linha + 2 < tamanho) {  // Aqui aplico uma condição para não acontecer de posicionar um navio em um local onde ultrapasse os limites do tabuleiro
        for (int y = 0; y < 3; y ++) {  //  Aqui inicio a condição para não sobrepor outro navio
            if (tabuleiro[linha + y][coluna] == 3){
                printf("O navio da vertical não pode ser posicionado em (%d, %d) por ja estar ocupado por um outro !\n", linha, coluna);
            return;
            }
        }    
    for (int y = 0; y < 3; y ++) {  //  Aqui declaro um loop para aplicar o navio na vertical (y) que ocupará também 3 posições
        tabuleiro[linha + y][coluna] = 3;   //  Aqui será aplicado p '3' nas linhas e colunas
        }
    } else {  // caso a condição seja acionada
        printf("O navio da vertical não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
    return;
    }
}
void navio_diagonal1 (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  // Aqui declaro a recursividade para o navio na diagonal do nivel aventuriro
    if ((linha + 2 < tamanho) && (coluna + 2 < tamanho)) {  // Aqui aplico uma condição para não acontecer de posicionar um navio em um local onde ultrapasse os limites do tabuleiro
        for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui inicio a condição para não sobrepor outro navio
            if (tabuleiro[linha + y][coluna + x] == 3){
                printf("O navio da diagonal 1 não pode ser posicionado em (%d, %d) por ja estar ocupado por um outro !\n", linha, coluna);
            return;
            }
        }    
    for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui declaro um loop para aplicar o navio na diagonal que ocupará também 3 posições
        tabuleiro[linha + y][coluna + x] = 3;   //  Aqui será aplicado p '3' nas linhas e colunas, estou aumentando a 'coluna' e a 'linha' para aplicar a diagonal 
        }
    } else {  // caso a condição seja acionada
        printf("O navio da diagonal 1 não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
    return;
    }
}
void navio_diagonal2 (int tabuleiro[tamanho][tamanho], int linha, int coluna) {  // Aqui declaro a recursividade para o navio na diagonal do nivel aventuriro
    if ((linha + 2 < tamanho) && (coluna - 2 >= 0)) {  // Aqui aplico uma condição para não acontecer de posicionar um navio em um local onde ultrapasse os limites do tabuleiro
        for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui inicio a condição para não sobrepor outro navio
            if (tabuleiro[linha + y][coluna - x] == 3){
                printf("O navio da diagonal 2 não pode ser posicionado em (%d, %d) por ja estar ocupado por um outro !\n", linha, coluna);
            return;
            }
        }    
    for (int x = 0, y = 0; x < 3 && y < 3; x ++, y ++) {  //  Aqui declaro um loop para aplicar o navio na diagonal que ocupará também 3 posições
        tabuleiro[linha + y][coluna - x] = 3;   //  Aqui será aplicado p '3' nas linhas e colunas, estou negativando a 'coluna' enquanto aumento a 'linha' para aplicar a diagonal 
        }
    } else {  // caso a condição seja acionada
        printf("O navio da diagonal 2 não pode ser posicionado aqui por ultrapassar o limite do tabuleiro !\n");
    return;
    }
}
void habilidade_cone(int tabuleiro[tamanho][tamanho], int origemi, int origemj) {   //  Aqui começo a declarar a recursividade da habilidade em cone
    if ((origemi + 2 >= tamanho) || (origemj + 2 >= tamanho) || (origemj - 2 < 0)) {   //  Aqui declaro as limitações da habilidade para que não ultrapasse os limites do tabuleiro
        printf("A habilidade cone ultrapassa os limites do tabuleiro!\n");
        return;  //  Aplicado para impedir que seja aplicado a habilidade, senão aplicaria ainda assim.
    }
    
    for (int i = 0; i < 3; i++) {  //  Aqui começo a desenhar o cone como no navio em vertical
        for (int j = -i; j <= i; j++) {  // Aqui aplico a condição para expansão da horizontal nas linhas seguintes, utilizndo a expansão de '1' como limitador, assim se cresce 1, j se expande desde a origemi até sua representação positiva = -1, 0, +1 e se i = 2, -2, -1, 0, +1, +2
            int ei = origemi + i;  //  Aqui criei a variavel'ei' para representar a expandão de i
            int ej = origemj + j;  //  Aqui criei a variavel'ej' para representar a expandão de j
            if (ei < tamanho && ej >= 0 && ej < tamanho) {  //  Aqui declaro as limitações da habilidade para que não ultrapasse os limites do tabuleiro
                if (tabuleiro[ei][ej] == 3) {   //   Aqui aplico uma condição para toda vez que a habilidade encontrar uma parte do navio o substitua de '3' para '5' simbolizando um acerto
                    tabuleiro[ei][ej] = 5;
                } else {
                    tabuleiro[ei][ej] = 1;  // Aqui se não encontrar uma parte do navio sera aplicado '1' para desenhar a habilidade
                }
            }
        }
    }
}
void habilidade_cruz(int tabuleiro[tamanho][tamanho], int origemi, int origemj) {   //  Aqui inicio a recursividade para a habilidade cruz
    if ((origemi + 1 >= tamanho) || (origemi - 1 < 0) || (origemj + 2 >= tamanho) || (origemj - 2 < 0)) {  //  Aqui coloco as limitações para que a habilidade não ultrapasse o tabuleiro
        printf("A habilidade cruz ultrapassa os limites do tabuleiro!\n");
        return;  //   Aplicado para impedir que seja aplicado a habilidade, senão aplicaria ainda assim.
    }

    for (int i = -1; i < 2; i++) {  // Aqui aplico a vertical da ceuz a partir de seu ponto de origem
        int ei = origemi + i;   //  Crio a variavel como no caso anterior 'ei' para expansão de i
        if (ei >= 0 && ei < tamanho) {   //  condição para limitar o tamanho
            if (tabuleiro[ei][origemj] == 3) {   //  Aqui é aplicado uma condição para representar um acerto ao navio
                tabuleiro[ei][origemj] = 5;
            } else {
                tabuleiro[ei][origemj] = 1; // Preenche o desenho com '1' se não houver acertos
            }
        }
    }

    for (int j = -2; j <= 2; j++) {  // Aqui é aplicado a horizontal da cruz a partir do ponto de origem
        int ej = origemj + j;   //   //  Crio a variavel como no caso anterior 'ej' para expansão de j
        if (ej >= 0 && ej < tamanho) {   //   Limito o tamanho
            if (tabuleiro[origemi][ej] == 3) {   //  Aqui é aplicado uma condição para representar um acerto ao navio
                tabuleiro[origemi][ej] = 5;
            } else {
                tabuleiro[origemi][ej] = 1;   // Preenche o desenho com '1' se não houver acertos
            }
        }
    }
}
void habilidade_octaedro(int tabuleiro[tamanho][tamanho], int origemi, int origemj) {   //  Aqui inicio a recursividade para a habilidade octaedro
    if ((origemi + 1 >= tamanho) || (origemi - 1 < 0) || (origemj + 1 >= tamanho) || (origemj - 1 < 0)) {  //  Aqui coloco as limitações para que a habilidade não ultrapasse o tabuleiro
        printf("A habilidade octaedro ultrapassa os limites do tabuleiro!\n");
        return;  //   Aplicado para impedir que seja aplicado a habilidade, senão aplicaria ainda assim.
    }

    for (int i = -1; i < 2; i ++) {   // Aqui aplico a vertical do octaedro a partir de seu ponto de origem
        int ei = origemi + i;
        if (ei >= 0 && ei < tamanho) {
            if (tabuleiro[ei][origemj] == 3) {   //  Aqui é aplicado uma condição para representar um acerto ao navio
                tabuleiro[ei][origemj] = 5;
            } else {
                tabuleiro[ei][origemj] = 1; // Preenche o desenho com '1' se não houver acertos
            }
        }
    }
    for (int j = -1; j < 2; j ++) {   // Aqui aplico a horizontal do octaedro a partir de seu ponto de origem
        int ej = origemj + j;
        if (ej >= 0 && ej < tamanho) {
            if (tabuleiro[origemi][ej] == 3) {   //  Aqui é aplicado uma condição para representar um acerto ao navio
                tabuleiro[origemi][ej] = 5;
            } else {
                tabuleiro[origemi][ej] = 1;   // Preenche o desenho com '1' se não houver acertos
            }
        }
    }
}

int main() {

    int tabuleiro[tamanho][tamanho] = {0};   //  Aqui quero iniciar o tabuleiro com todos os valores '0' para serem representados por àgua

    navio_horizontal(tabuleiro, 2, 2);  //  Aqui chamo a recursividade do navio na horizontal, coloquei como posição inicial 'C2' no tabuleiro e ocupou 'C2, D2 e E2'
    navio_vertical(tabuleiro, 6, 6);    //  Aqui chamo a recursividade do navio na vertical, coloquei como posição inicial 'G6' no tabuleiro e ocupou 'G6, G7 e G8'
    navio_diagonal1(tabuleiro, 1, 7);    //  Aqui chamo a recursividade do navio na diagonal, coloquei como posição inicial 'H1' no tabuleiro e ocupou 'H1, I2 e J3'
    navio_diagonal2(tabuleiro, 4, 3);    //  Aqui chamo a recursividade do navio na diagonal, coloquei como posição inicial 'D4' no tabuleiro e ocupou 'D4, C5 e B6'
    habilidade_cone(tabuleiro, 7, 2);   //  Aqui chamo a recursividade da habilidade em cone, coloquei como origem a posição 'C7' no tabuleiro e se expandiu para baixo desenhando o cone, escolhi essa posição para o desenho complero sem 'acerto'
    habilidade_cruz(tabuleiro, 1, 2);   //  Aqui chamo a recursividade da habilidade em cruz, coloquei como origem a posição 'C1' no tabuleiro e obtive um acerto convertendo uma parte do navio de '3' para '5' em 'C2'
    habilidade_octaedro(tabuleiro, 7, 6);   //  Aqui chamo a recursividade da habilidade em octaedro, coloquei como origem a posição 'G7' no tabuleiro e obtive três acertos convertendo as partes do navio de '3' para '5'
    exibicao_tabuleiro(tabuleiro);   //  Aqui chamo a recursividade da exibição do tabuleiro

    return 0;
}
