#include<stdio.h>

void main()
{
	int a,b;
	do
	{
	printf("Nhap vao 2 so a va b\n");
	printf("a = ");	scanf("%d",&a);
	printf("b = ");	scanf("%d",&b);
	}while (a<=0||b<=0);
	
//Uoc chung lon nhat

	for (int i=a;i>0;i--)
	{
		if (a%i==0&&b%i==0)
		{
		printf("Uoc chung lon nhat cua a va b la : %d",i);
		break;
		}
	}

//Boi chung nho nhat

	for (int j=a;j<=(a*b);j++)
	{
		if (j%a==0&&j%b==0)
		{
		printf("\nBoi chung nho nhat cua a va b la : %d",j);
		break;
		}
	}
}