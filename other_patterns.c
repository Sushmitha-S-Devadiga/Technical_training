#include <stdio.h>

int main() {
    int i, j;

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

    // Print 8
    printf("Number 8:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if( (i==0 || i==2 || i==4) && (j>0 && j<4) || (j==0 || j==4) && (i==1 || i==3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print 5
    printf("Number 5:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i==0 || i==2 || i==4 || (i==1 && j==0) || (i==3 && j==4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print 2
    printf("Number 2:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i==0 || i==2 || i==4 || (i==1 && j==4) || (i==3 && j==0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print A
    printf("Letter A:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if((j==0 || j==4) && i!=0 || i==0 || i==2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print U
    printf("Letter U:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if((j==0 || j==4) && i!=4 || i==4 && (j!=0 && j!=4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    // Print 6
    printf("Number 6:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i==0 || i==2 || i==4 || (j==0 && i!=0) || (j==4 && i==3))
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
            if(i==0 || i==2 || i==4 || j==0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

