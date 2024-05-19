#include<stdio.h>
void main()
{
	int a=9, b=6;
	a++;//a=10
	a=a+b--;//a=10+6=16 ; b=5
	a=a+(--b);//a=16+4=20
	if(a%2==0)	printf("Gia tri cua a la chan\n");
	printf("Tong cua a va b la: %d", a+b);//a=16;b=4;a+b=24
}