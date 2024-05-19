#include<stdio.h>
void main()
{
	int x;
	
	do
	{	
	printf("Nhap vao so co ba chu so ",x);	
	scanf("%d",&x);
	}while (x<100||x>999);
	
	int tram=x/100,chuc=(x%100)/10,donvi=x%10;//chia lay du
	
	if (tram==chuc&&chuc==donvi) printf("Ba chu so bang nhau va = %d",tram);
	else if (tram>chuc&&tram>donvi) printf("Chu so lon nhat la %d o hang tram",tram);
	else if (chuc>tram&&chuc>donvi) printf("Chu so lon nhat la %d o hang chuc",chuc);
	else if (donvi>chuc&&donvi>tram) printf("Chu so lon nhat la %d o hang don vi",donvi);	
}