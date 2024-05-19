#include<stdio.h>
void main()
{
	int n;
	printf("Nhap vao n = "); scanf("%d",&n);
	
//cau b

	if (n>0)	printf("Gia tri n = %d",++n);
	else if (n<0)	printf("Gia tri n = %d",--n);
}