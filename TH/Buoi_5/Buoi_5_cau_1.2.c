#include <stdio.h>

// Hàm để hoán đổi hai phần tử
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm heapsort
void heapify(int arr[], int n, int i) {
    int largest = i;   // Khởi tạo largest như là gốc
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Nếu nút con trái lớn hơn gốc
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Nếu nút con phải lớn hơn gốc
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Nếu largest không phải là gốc
    if (largest != i) {
        swap(&arr[i], &arr[largest]);

        // Heapify lại các nhánh bị ảnh hưởng
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Xây dựng Heap từ mảng (sắp xếp đảo ngược)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Trích xuất từng phần tử từ Heap
    for (int i = n - 1; i >= 0; i--) {
        // Di chuyển gốc hiện tại vào cuối mảng
        swap(&arr[0], &arr[i]);

        // Heapify lại mảng đã được rút gọn
        heapify(arr, i, 0);
    }
}

// Hàm để phân chia mảng
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // Chọn phần tử chốt làm pivot
    int i = (low - 1);  // Chỉ mục của phần tử nhỏ hơn pivot

    for (int j = low; j <= high - 1; j++) {
        // Nếu phần tử hiện tại nhỏ hơn hoặc bằng pivot
        if (arr[j] <= pivot) {
            i++;    // Tăng chỉ mục của phần tử nhỏ hơn pivot
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Hàm quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Tìm phần tử chốt đúng vị trí và chia mảng
        int pi = partition(arr, low, high);

        // Sắp xếp các phần tử trước và sau pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Hàm để hiển thị mảng
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100];
    int n;
	do
	{
		printf("Nhap so phan tu co trong mang(n>0): ");
    	scanf("%d", &n);
	}while (n<1);
    

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang truoc khi sap xep bang heapsort: ");
    displayArray(arr, n);

    // Sắp xếp mảng bằng heapsort
    heapSort(arr, n);
    printf("Mang sau khi sap xep bang heapsort: ");
    displayArray(arr, n);

    // Sắp xếp lại mảng trước khi sắp xếp bằng quicksort
    printf("Mang truoc khi sap xep bang quicksort: ");
    displayArray(arr, n);

    // Sắp xếp mảng bằng quicksort
    quickSort(arr, 0, n - 1);
    printf("Mang sau khi sap xep bang quicksort: ");
    displayArray(arr, n);

    return 0;
}
