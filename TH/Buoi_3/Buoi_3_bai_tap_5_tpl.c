#include<stdio.h>
void main()
{
	float a,b,c,max;
	
	printf("Nhap vao gia tri cua ba so a b c \n");
	printf("a= ");scanf("%f",&a);
	printf("b= ");scanf("%f",&b);
	printf("c= ");scanf("%f",&c);
	
	if (a>b&&a>c)	max=a;
	else if (b>a&&b>c)	max=b;
	else max=c;
	
	printf("Gia tri lon nhat la %.2f ",max);	
}