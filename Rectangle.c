#include <stdio.h>

int main() {
    int row=1;
    int column;

    while(row<=5){
        column =1;

        while(column<=8){
            printf("*");
            column++;
        }
        printf("\n");
        row++;
    }
    return 0;
}