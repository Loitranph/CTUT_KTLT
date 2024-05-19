#include<stdio.h>
void main()
{
	float a,b,c;
	
	printf("Nhap vao gia tri cua ba so a b c \n");
	printf("a= ");
	scanf("%f",&a);
	printf("b= ");
	scanf("%f",&b);
	printf("c= ");
	scanf("%f",&c);
	
	if (a>b&&a>c)
	{	
		if (b>c) printf("Gia tri tang dan la %.2f %.2f %.2f",c,b,a);
		else printf("Gia tri tang dan la %.2f %.2f %.2f",b,c,a);s
	}
	else if (b>a&&b>c)
	{	
		if (a>c) printf("Gia tri tang dan la %.2f %.2f %.2f",c,a,b);
		else printf("Gia tri tang dan la %.2f %.2f %.2f",a,c,b);
	}
	else 
	{
		if (a>b) printf("Gia tri tang dan la %.2f %.2f %.2f",b,a,c);
		else printf("Gia tri tang dan la %.2f %.2f %.2f",a,b,c);
	}	
}