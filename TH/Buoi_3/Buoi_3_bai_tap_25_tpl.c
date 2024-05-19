#include<stdio.h>
void main()
{
	int h;

	printf("Nhap vao chieu cao h ");
	scanf("%d",&h);

	for (int i=1;i<=h;i++)
	{
		for (int j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
}