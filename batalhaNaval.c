#include <stdio.h>

#define COLUNAS 5
#define LINHAS 5

void imprimirMatriz(int matriz[LINHAS][COLUNAS]){
    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

int main() {

    int cone[LINHAS][COLUNAS] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    int cruz[LINHAS][COLUNAS] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int octaedro[LINHAS][COLUNAS] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    printf("Cone:\n");
    imprimirMatriz(cone); //Imprime a matriz cone.

    printf("Cruz:\n");
    imprimirMatriz(cruz); //Imprime a matriz cruz.

    printf("Octaedro:\n");
    imprimirMatriz(octaedro); //Imprime a matriz octaedro.

    return 0;
}