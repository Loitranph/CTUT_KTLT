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
	
	if (tram==chuc&&chuc==donvi) printf("=>> %d%d%d",tram,chuc,donvi);
	else if (tram>chuc&&tram>donvi) 
	{
		if (chuc>donvi)	printf("=>> %d%d%d",donvi,chuc,tram);
		else printf("=>> %d%d%d",chuc,donvi,tram);			
	}
	else if (chuc>tram&&chuc>donvi) 
	{
		if (tram>donvi)	printf("=>> %d%d%d",donvi,tram,chuc);
		else printf("=>> %d%d%d",tram,donvi,chuc);
	}
	else 
	{
		if (tram>chuc)	printf("=>> %d%d%d",chuc,tram,donvi);
		else printf("=>> %d%d%d",tram,chuc,donvi);
	}	
}