#include <stdio.h>

int main() {
    int numRows, numCols;

    printf("Nhap so dong cua ma tran: ");
    scanf("%d", &numRows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &numCols);

    int matrix[numRows][numCols];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Cac phan tu trong ma tran:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}