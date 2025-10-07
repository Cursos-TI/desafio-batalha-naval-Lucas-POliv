#include <stdio.h>

#define COLUNAS 10
#define LINHAS 10

int main() {
    char indice[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[LINHAS][COLUNAS];
    int tamanhoNavio = 3;

    // Preenche tabuleiro com água (0)
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ---- NAVIO HORIZONTAL ----
    int linhaH = 2; // linha 3 (índice 2)
    int colunaH = 4; // começa na coluna E (índice 4)

    //Valida se cabe dentro do tabuleiro
    if (colunaH + tamanhoNavio <= 10) { // valida limite
        int livre = 1;

        //Verifica se o caminho está livre
        for (int j = colunaH; j < colunaH + tamanhoNavio; j++) {
            if (tabuleiro[linhaH][j] != 0) {
                livre = 0; // já tem navio
            }
        }

        //Se estiver livre, coloca o navio
        if (livre) {
            for (int j = colunaH; j < colunaH + tamanhoNavio; j++) {
                tabuleiro[linhaH][j] = 3;
            }
        }
    }

    // ---- NAVIO VERTICAL ----
    int linhaV = 6; // linha 7 (índice 6)
    int colunaV = 7; // coluna H (índice 7)

    //Valida se cabe dentro do tabuleiro
    if (linhaV + tamanhoNavio <= 10) { // valida limite
        int livre = 1;

        //Verifica se o caminho está livre
        for (int i = linhaV; i < linhaV + tamanhoNavio; i++) {
            if (tabuleiro[i][colunaV] != 0) {
                livre = 0; // já tem navio
            }
        }

        //Se estiver livre, coloca o navio
        if (livre) {
            for (int i = linhaV; i < linhaV + tamanhoNavio; i++) {
                tabuleiro[i][colunaV] = 3;
            }
        }
    }

    // ---- NAVIO 1 DIAGONAL ----
    int linhaD = 0; //linha 1 (índice 0)
    int colunaD = 0; //coluna A (índice 0)

    //Valida se cabe dentro do tabuleiro
    if(linhaD + tamanhoNavio <= 10 && colunaD + tamanhoNavio <= 10){
        int livre = 1;

        //Verifica se o caminho está livre
        for(int k = 0; k < tamanhoNavio; k++){
            if(tabuleiro[linhaD + k][colunaD + k] !=0){
                livre = 0;
            }
        }

        //Se estiver livre, coloca o navio
        if (livre){
            for(int k = 0; k < tamanhoNavio; k++){
            tabuleiro[linhaD + k][colunaD + k] = 3;
            }
        }
    }

    // ---- NAVIO 2 DIAGONAL ----
    int linhaD2 = 6; //linha 7 (índice 6)
    int colunaD2 = 2; //coluna C (índice 2)

    //Valida se cabe dentro do tabuleiro
    if(linhaD2 + tamanhoNavio <= 10 && colunaD2 + tamanhoNavio <= 10){
        int livre = 1;

        //Verifica se o caminho está livre
        for(int k = 0; k < tamanhoNavio; k++){
            if(tabuleiro[linhaD2 + k][colunaD2 + k] !=0){
                livre = 0;
            }
        }

        //Se estiver livre, coloca o navio
        if (livre){
            for(int k = 0; k < tamanhoNavio; k++){
            tabuleiro[linhaD2 + k][colunaD2 + k] = 3;
            }
        }
    }
    

    // ---- TABULEIRO ----
    printf("TABULEIRO BATALHA NAVAL\n  ");
    for (int i = 0; i < LINHAS; i++) { //Mostra as letras
        printf(" %c", indice[i]);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) { //Mostra os números
        printf("%2d", i + 1);
       for (int j = 0; j < COLUNAS; j++) { //Mostra o tabuleiro
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}