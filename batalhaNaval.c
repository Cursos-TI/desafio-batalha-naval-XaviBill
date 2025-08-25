#include <stdio.h>

int main() {
    // Dimensões do tabuleiro e do navio
    int tamanhoTabuleiro = 10;
    int tamanhoNavio = 3;

    // Declarando a matriz que representa o tabuleiro (10x10)
    // 0 = água
    // 3 = parte do navio
    int tabuleiro[10][10];
    
    // Inicializando o tabuleiro apenas com água
    for (int linha = 0; linha < tamanhoTabuleiro; linha++) {
        for (int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Colocando o primeiro navio na horizontal
    // Posição inicial: linha 2, colunas 4, 5 e 6
    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 4;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3;
    }

    // Colocando o segundo navio na vertical
    // Posição inicial: col. 2, linhas 5, 6 e 7
    int linhaNavioVertical = 5;
    int colunaNavioVertical = 2;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;
    }

    // Exibindo o tabuleiro
    // Cabeçalho com letras para colunas
    printf("   A B C D E F G H I J\n");
    for (int linha = 0; linha < tamanhoTabuleiro; linha++) {
        // Mostra o número da linha (com alinhamento para 2 dígitos)
        printf("%2d ", linha + 1);
        for (int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    return 0;
}
