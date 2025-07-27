#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("1");
        for(j = 2; j <= i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

