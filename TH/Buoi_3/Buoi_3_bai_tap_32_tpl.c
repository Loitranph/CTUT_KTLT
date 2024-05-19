#include<stdio.h>

void main()
{
	int n,j=0;
	do
	{
		printf("Nhap vao n = "); scanf("%d",&n);
	}while (n<=0);
	
	for (int i=1;i<=n;i++)
		if (n%i==0)	j++;
	printf("So uoc cua %d la %d",n,j);
	
}