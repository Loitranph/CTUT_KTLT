#include <stdio.h>
#include<math.h>
#include <stdlib.h>

void tinhTB (){
	int min, max;
	printf("Nhap gia tri min: ");
	scanf("%d",&min);
	printf("Nhap gia tri max: ");
	scanf("%d",&max);
	int i = min;
	double tong = 0;
	int dem = 0;
	while(i <= max) {
		if(i % 2 == 0) {
			tong+=i;
			dem++;
		//	printf(" cac so chia het cho 2 %d \n", i);
		}
		i++;
	}
	if( dem == 0)
		printf("Khong ton tai so chia het cho 3!");
	else {
		double tbc = tong/dem;
		// printf(" bien dem %d \n", dem);
		printf("Trung binh tong cac so chia het cho 2 tu %d -> %d: %.2lf \n", min, max, tbc);
	}
}

void BangCuuChuong (){
	int n;
	printf("vui long nhap n \n");
	scanf("%d",&n);
	printf("Bang cuu chuong %d la \n", n);
	for (int i = 1; i<=10; i++){
		printf ("%d x %d = %d \n", n, i,  n*i );
	}

	printf("Bang cuu chuong nguoc cua %d la \n", n);
	for (int i = 10; i >= 1; i--){
		printf ("%d x %d = %d \n", n, i,  n*i );
	}
}
  
void SoNT (){
	int n;
	do{
		printf("Nhap so n: ");
		scanf("%d",&n);
	}while(n<0);
	
	int isSNT = 1; // snt là chia het cho 1 và chinh no: n%1== 0 && n%n==0
	double cb2N = sqrt(n);
	printf("%.2lf \n", cb2N);
	for(int i = 2; i <= cb2N; i++){
		if(n % i == 0){
			isSNT = 0;
			break;
		}
	}
	if(isSNT == 1){
		printf("%d la so nguyen to \n",n);
	}
	else
		printf("%d khong phai la so nguyen to \n",n);
	
}  
void SoCP(){
	int x;
	do{
		printf("Nhap so x: \n");
		scanf("%d",&x);
	}while(x<0);
	
	int i;
	for( i = 1; i <= x; i++){
		if(i*i == x){
			printf("%d la so chinh phuong \n",x);
			break;
		}
	}
	if(i*i != x ) {
		printf("%d khong phai la so chinh phuong \n",x);
	}	
}

int main () {
	printf("\t\t\t ============MENU================================\n");
    printf("\t\t\t |1. Tinh trung binh                            |\n");
    printf("\t\t\t |2. So nguyen to                               |\n");
    printf("\t\t\t |3. So chinh phuong                            |\n");
    printf("\t\t\t |4. menu								          |\n");
    printf("\t\t\t |5. Bang cuu chuong                            |\n");
    printf("\t\t\t |6. Thoat                                      |\n");
    printf("\t\t\t ================================================\n");
	int chon;
	do{
		printf("vui long nhap chon lua \n");
		scanf("%d",&chon);
		switch(chon){
		case 1: 
			tinhTB();
			break;
		case 2: 
			SoNT();
			break;
		case 3: 
			SoCP();
			break;
		case 4: break;
		case 5: 
			BangCuuChuong();
			break;
		case 6: break; // thoat khoi chuong trinh
		default: // in ra lenh yeu cau nhap lai
			printf("Ban chon sai. Moi ban chon lai MENU!\n");
            break;
	}
	}while(chon != 6);
	
	
	
	
}
