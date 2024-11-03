#include <stdio.h>
#include <stdlib.h>

int show(int **matrix, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            printf("%d", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    return 0;
}

int matrix[9][9] = {
    {5, 0, 0, 4, 6, 7, 3, 0, 9},
    {9, 0, 3, 8, 1, 0, 4, 2, 7},
    {1, 7, 4, 2, 0, 3, 0, 0, 0},
    {2, 3, 1, 9, 7, 6, 8, 5, 4},
    {8, 5, 7, 1, 2, 4, 0, 9, 0},
    {4, 9, 6, 3, 0, 8, 1, 7, 2},
    {0, 0, 0, 0, 8, 9, 2, 6, 0},
    {7, 8, 2, 6, 4, 1, 0, 0, 5},
    {0, 1, 0, 0, 0, 0, 7, 0, 8},
};

int main() {


    int **mat = malloc(sizeof(int *) * 9);

    for (int i = 0; i < 9; i++) {
        mat[i] = malloc(sizeof(int) * 9);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            *(*(mat + i) + j) = matrix[i][j];
        }
    }

    show(mat, 9);
    return 0;
}
