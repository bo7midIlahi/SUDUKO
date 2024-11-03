#include <stdio.h>
#include "print.h"

void show(int matrix[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i % 3 == 0 && j == 0) {
                printf("-----------\n"); // Print separator row only once at the beginning of a block
            }
            if (j % 3 == 0) {
                printf("|");
            }
            printf("%d", matrix[i][j]);
        }
        printf("|\n"); // End of row
    }
    printf("-----------\n"); // Bottom border of the grid
}