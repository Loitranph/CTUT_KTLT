#include<stdio.h>
void main()
{
	int h,m,s;
	printf("Nhap vao gio : ");	scanf("%d",&h);
	printf("Nhap vao phut : ");	scanf("%d",&m);
	printf("Nhap vao giay : ");	scanf("%d",&s);

	if (h>=0&&h<=24)
	{
		if (0<=m&&m<=60&&0<=m&&m<=60)
			printf("%d:%d:%d la thoi gian hop le ",h,m,s);
		else printf("%d:%d:%d la thoi gian khong hop le ",h,m,s);
	}else printf("%d:%d:%d la thoi gian khong hop le ",h,m,s);
}