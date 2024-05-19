#include<stdio.h>
void main()
{
	float km,tien;
	do
	{
	printf("Nhap vao so km(km>0) : ");
	scanf("%f",&km);
	}while (km<0);	
	if (km<=1)	tien = 12500;
	else if (km<=30)
	{
		int m=((km-1)*1000)/200;
		tien = 14500 + 2000*m;
	}
	else	tien = 12500 + 2000*29*5+ 9000*(km-30);
	printf("So tien phai tra khi di TAXI %.1f km la %.0f VND",km,tien);
}