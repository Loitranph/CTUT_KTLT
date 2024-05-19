#include<stdio.h>
void main()
{
	int h;

	printf("Nhap vao chieu cao h "); scanf("%d",&h);

	for (int i=1;i<=h;i++)//chieu cao h
	{
		for (int j=h-i;j>0;j--)printf(" ");//in dau cach hang thu i
		
		for (int k=1;k<=(2*i)-1;k++) printf("*");//in * hang thu i
		
		printf("\n");//xuong dong
	}	
}