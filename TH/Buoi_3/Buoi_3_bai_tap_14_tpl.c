#include<stdio.h>
#include<math.h>
#include <stdlib.h>
void main()
{
	int a,b,c;
	do
	{	
	printf("Nhap vao ba so nguyen duong a b c \n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	system("cls");
	}while (a<0||b<0||c<0);
	system("cls");
	{	
	if (a+b>c&&b+c>a&&a+c>b)
	{
		if (a==b&&b==c)
		{
			printf("Tao thanh tam giac deu");
		}else if ((a==b||a==c||b==c)&&((a==sqrt(b*b+c*c))||(b==sqrt(a*a+c*c))||(c==sqrt(a*a+b*b))))
		{
			printf("Tao thanh tam giac vuong can");
		}else if (((a==sqrt(b*b+c*c))||(b==sqrt(a*a+c*c))||(c==sqrt(a*a+b*b))))
		{
			printf("Tao thanh tam giac vuong");
		}else if (a==b||a==c||b==c)
		{
			printf("Tao thanh tam giac  can");
		}else printf("Tao thanh tam giac thuong");
	}else printf("Khong tao thanh tam giac ");
	}
}