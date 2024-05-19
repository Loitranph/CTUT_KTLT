#include <stdio.h>

void heapify(int arr[][100], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    for (int j = 0; j < n; j++) {
        if (left < n && arr[j][left] > arr[j][largest])
            largest = left;

        if (right < n && arr[j][right] > arr[j][largest])
            largest = right;
    }

    if (largest != i) {
        for (int j = 0; j < n; j++) {
            int temp = arr[j][i];
            arr[j][i] = arr[j][largest];
            arr[j][largest] = temp;
        }

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[][100], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < n; j++) {
            int temp = arr[j][0];
            arr[j][0] = arr[j][i];
            arr[j][i] = temp;
        }

        heapify(arr, i, 0);
    }
}

int partition(int arr[][100], int low, int high, int row) {
    int pivot = arr[row][high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[row][j] < pivot) {
            i++;

            for (int k = 0; k < row; k++) {
                int temp = arr[k][i];
                arr[k][i] = arr[k][j];
                arr[k][j] = temp;
            }
        }
    }

    for (int k = 0; k < row; k++) {
        int temp = arr[k][i + 1];
        arr[k][i + 1] = arr[k][high];
        arr[k][high] = temp;
    }

    return (i + 1);
}

void quickSort(int arr[][100], int low, int high, int row) {
    if (low < high) {
        int pi = partition(arr, low, high, row);

        quickSort(arr, low, pi - 1, row);
        quickSort(arr, pi + 1, high, row);
    }
}

int main() {
    int numRows, numCols;

    printf("Nhap so dong cua ma tran: ");
    scanf("%d", &numRows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &numCols);

    int arr[numRows][100];

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("arr[%d][%d] = ", i, j);
        scanf("%d", &arr[i][j]);
    }
}

printf("Mang chua sap xep:\n");
for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}

// S?p x?p b?ng Heap Sort
heapSort(arr, numRows);

printf("Mang sau khi sap xep (Heap Sort):\n");
for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}

// S?p x?p b?ng Quick Sort
for (int i = 0; i < numRows; i++) {
    quickSort(arr, 0, numCols - 1, i);
}

printf("Mang sau khi sap xep (Quick Sort):\n");
for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
return 0;
}