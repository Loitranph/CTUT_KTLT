#include<stdio.h>
void main()
{
	int m,n;
	
	printf("Nhap vao so cot m "); scanf("%d",&m);
	printf("Nhap vao so hang n "); scanf("%d",&n);
	

	for (int j=1;j<=m;j++)	printf("*");//Hang 1 
		
	for (int i=1;i<=n-2;i++)
	{
	
		printf("\n*");
	
			for (int k=1;k<=m-2;k++) printf(" ");
	
		printf("*\n");
	}	
			
	for (int j=1;j<=m;j++)	printf("*");//Hang cuoi n
}