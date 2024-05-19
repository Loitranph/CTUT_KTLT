#include<stdio.h>
#include<math.h>
void main()
{
	float s;
	const float pi=3.141593;
	printf("Nhap vao dien tich S cua mat cau : ");
	scanf("%f",&s);
	float r=sqrt(s/(4*pi));//Tinh ban kinh
	float v=r*r*r*pi*4/3;//Tinh the tich
	printf("-----------------------------------\n");	
	printf("=> The tich khoi cau V la : %.3f ",v);
}
