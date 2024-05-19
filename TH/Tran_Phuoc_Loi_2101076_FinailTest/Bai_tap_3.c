#include <stdio.h>

int nhap_mang(int mang[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        while (1) {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &mang[i]);
            if (mang[i] > 0) break;
            else printf("Phan tu khong hop le. Vui long nhap lai.\n");
        }
    }
}

void xuat_mang_dao_nguoc(int mang[], int n) {
    int i;
    printf("Mang dao nguoc: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int tinh_tich_so_chan(int mang[], int n) {
    int i, tich = 1;
    for (i = 0; i < n; i++) {
        if (mang[i] % 2 == 0) {
            tich *= mang[i];
        }
    }
    return tich;
}

void main() {
    int n, i;
    do
    {
    	printf("Nhap so phan tu cua mang: ");
    	scanf("%d", &n);
	}while (n<1);
    int mang[n];
    nhap_mang(mang, n);
    xuat_mang_dao_nguoc(mang, n);
    int tich = tinh_tich_so_chan(mang, n);
    printf("Tich cac so chan trong mang: %d\n", tich);
}