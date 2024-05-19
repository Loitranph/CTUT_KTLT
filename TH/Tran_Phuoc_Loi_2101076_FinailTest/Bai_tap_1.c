#include<stdio.h>
#include<math.h>

void main()
{
	float toan,li,hoa,van,anh,tbm;
	printf("Nhap diem tung mon :\n");
	do { printf("Toan = ");scanf("%f",&toan);
	}while (toan<0||toan>10);
	do{	printf("Vat li = ");scanf("%f",&li);
	}while (li<0||li>10);
	do{	printf("Hoa hoc = ");scanf("%f",&hoa);
	}while (hoa<0||hoa>10);
	do{	printf("Ngu van = ");scanf("%f",&van);
	}while (van<0||van>10);
	do{	printf("Anh van = ");scanf("%f",&anh);
	}while (anh<0||anh>10);
	
	if (toan>9&&(li>9||hoa>9)) printf("Hoc ban Tu nhien");
	else if (toan>9&&(van>9||anh>9)) printf("Hoc ban Xa hoi");
	else printf("Hoc ban Co ban");
	tbm=(toan+li+hoa+van+anh)/5;
	printf("\nTrung binh mon = %f",tbm);
}