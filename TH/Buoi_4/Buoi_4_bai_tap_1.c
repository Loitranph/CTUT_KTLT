#include<stdio.h>

int main() //cau 1
{
	int min, max;
	printf ("Nhap min: ");
	scanf ("%d", &min);
	printf ("Nhap max: ");
	scanf ("%d", &max);
	int i = min;
	double tong = 0;
	int dem = 0;
	while (i<=max) {
		if (i%2 == 0){
			tong+=i;
			dem++;	
		}
		i++;
		
	}
if (dem ==0)
    printf("Khong ton tai so chia het cho 3!");
else{
	double tbc = tong/dem;
	printf("Trung binh tong cac so chia het cho 2 tu %d -> %d: %.2f", min, max, tbc);
}
}


