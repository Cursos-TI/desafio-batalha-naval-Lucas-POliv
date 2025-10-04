#include <stdio.h>

int main() {
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];
    int tamanhoNavio = 3;

    // Preenche tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ---- NAVIO HORIZONTAL ----
    int linhaH = 2; // linha 3 (índice 2)
    int colunaH = 4; // começa na coluna E (índice 4)

    if (colunaH + tamanhoNavio <= 10) { // valida limite
        int livre = 1;
        for (int j = colunaH; j < colunaH + tamanhoNavio; j++) {
            if (tabuleiro[linhaH][j] != 0) {
                livre = 0; // já tem navio
            }
        }
        if (livre) {
            for (int j = colunaH; j < colunaH + tamanhoNavio; j++) {
                tabuleiro[linhaH][j] = 3;
            }
        }
    }

    // ---- NAVIO VERTICAL ----
    int linhaV = 6; // linha 7 (índice 6)
    int colunaV = 7; // coluna H (índice 7)

    if (linhaV + tamanhoNavio <= 10) { // valida limite
        int livre = 1;
        for (int i = linhaV; i < linhaV + tamanhoNavio; i++) {
            if (tabuleiro[i][colunaV] != 0) {
                livre = 0; // já tem navio
            }
        }
        if (livre) {
            for (int i = linhaV; i < linhaV + tamanhoNavio; i++) {
                tabuleiro[i][colunaV] = 3;
            }
        }
    }

    // ---- PRINT TABULEIRO ----
    printf("TABULEIRO BATALHA NAVAL\n  ");
    for (int i = 0; i < 10; i++) {
        printf(" %c", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
