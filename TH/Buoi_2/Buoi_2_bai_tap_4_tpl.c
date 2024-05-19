#include<stdio.h>
void main()
{
	float r;
	const pi=3.141593;
	printf("Nhap vao gia tri ban kinh R = ");
	scanf("%f",&r);
	printf("--------------------------------\n");
	printf("=> Chu vi hinh tron C = %.3f \n",2*pi*r);
	printf("--------------------------------\n");
	printf("=> Dien tich hinh tron S = %.3f",pi*r*r);
}	
