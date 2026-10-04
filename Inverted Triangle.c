#include <stdio.h>

int main() {
    int row = 5;
    int column;

    while (row >= 1) {
        column = 1;

        while (column <= row) {
            printf("*");
            column++;
        }

        printf("\n");
        row--;
    }

    return 0;
}