#include<stdio.h>
void main()
{
	int m,n;
	
	printf("Nhap vao so cot m "); scanf("%d",&m);
	printf("Nhap vao so hang n "); scanf("%d",&n);
	
	for (int i=1;i<=n;i++)
	{
			for (int j=1;j<=m;j++) printf("*");
		printf("\n");	
	}	
}