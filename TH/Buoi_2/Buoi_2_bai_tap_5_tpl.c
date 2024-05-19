#include<stdio.h>
void main()
{
	float r,h;
	const float pi=3.141593;
	printf("Nhap gia tri ban kinh r(m): ");
	scanf("%f",&r);
	printf("Nhap vao gia tri chieu cao h(m): ");
	scanf("%f",&h);
	float v=pi*r*r*h;
	printf("--------------------------------\n");
	printf("=> The tich V = %.3f (m3)",v);	
}
