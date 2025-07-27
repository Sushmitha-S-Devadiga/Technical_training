#include <stdio.h>

int main() {
    int i, j;

    // Print N
    printf("Letter N:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(j == 0 || j == 4 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print I
    printf("Letter I:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == 0 || i == 4 || j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print T
    printf("Letter T:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == 0 || j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print second T
    printf("Letter T:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == 0 || j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print E
    printf("Letter E:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == 0 || i == 2 || i == 4 || j == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

