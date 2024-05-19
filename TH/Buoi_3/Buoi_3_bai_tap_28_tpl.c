#include<stdio.h>
void main()
{
	int h;	printf("Nhap vao chieu cao h ");	scanf("%d",&h);
	
	//Dinh tam giac
	for (int i=1;i<h;i++)	printf(" ");	printf("*\n");

	//Than tam giac rong
	for (int j=2;j<h;j++)
	{
		for (int k=h-j;k>0;k--)		printf(" ");//in dau cach hang thu i
		printf("*");
		for (int l=4;l<=2*j;l++) 	printf(" ");//in dau cach trong tam giac hang thu i
		printf("*\n");//in * va xuong dong
	}
	//Day tam giac 2h-1
	for (int n=1;n<=(2*h)-1;n++) 	printf("*");
}