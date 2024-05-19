#include<stdio.h>
void main()
{
	int h;

	printf("Nhap vao chieu cao h = ");
	scanf("%d",&h);

	printf("*\n");//Dinh tam giac 1
	
	for (int i=1;i<=h-2;i++)
	{
		printf("*");
		for (int j=1;j<=i;j++)	printf(" ");
		printf("*\n");	
	}
//	printf("* ");//Khi thay h-1
	for (int i=1;i<=h+1;i++) printf("*");//Day tam giac h+1
}