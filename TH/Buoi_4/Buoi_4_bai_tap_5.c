#include <stdio.h>

int main() {
    int i, j;

    printf("Bang cuu chuong tu 1 den 10:\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%2d x %2d = %2d\n", i, j, i*j);
        }
        printf("\n");
    }

    printf("\n");


    printf("Bang cuu chuong tu 10 den 1:\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}
