#include <stdio.h>

int main() {
    int i = 1, j, spaces;
    int n = 5;

    // Upper part
    while (i <= n) {
        spaces = n - i;

        while (spaces > 0) {
            printf(" ");
            spaces--;
        }

        j = 1;
        while (j <= (2 * i - 1)) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    // Lower part
    i = n - 1;

    while (i >= 1) {
        spaces = n - i;

        while (spaces > 0) {
            printf(" ");
            spaces--;
        }

        j = 1;
        while (j <= (2 * i - 1)) {
            printf("*");
            j++;
        }

        printf("\n");
        i--;
    }

    return 0;
}