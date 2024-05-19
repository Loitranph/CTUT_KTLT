#include<stdio.h>
void main()
{
	int n;
	do
	{
	printf("Nhap vao n(0<=n<=10) = "); scanf("%d",&n);	
	}while (n<0||n>10);


//cau c
	if (n<0||n>10)	printf("Nhap sai");
	else if (n<3)	printf("Kem");
	else if (n<5)	printf("Yeu");
	else if (n<6)	printf("Trung binh");
	else if (n<8)	printf("Kha");
	else if (n<9)	printf("Gioi");
	else if (n<10)	printf("Xuat sac");

}