#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	
	printf("Nhap vao n = ");
	scanf("%d",&n);
	
	int a=sqrt(n);
		
	if (pow(a,2)==n) printf("%d la so chinh phuong",n);
	else printf("%d khong phai la so chinh phuong",n);
}