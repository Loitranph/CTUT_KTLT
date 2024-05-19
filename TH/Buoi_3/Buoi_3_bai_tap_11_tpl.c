#include<stdio.h>
void main()
{
	int d,m,y;
	do
	{
	printf("Nhap vao ngay hop le : ");	scanf("%d",&d);
	printf("Nhap vao thang hop le : "); scanf("%d",&m);
	printf("Nhap vao nam hop le : ");	scanf("%d",&y);
	printf("--------------------------------------\n");
	}
	while (((d<=0||d>28)||m!=2||(y<=0||y%4==0))						 	 //Nhan vao thang co toi da 28 ngay
	&&((d<=0||d>29)||m!=2||(y<=0||y%4!=0))&&						 	 //Nhan vao thang co toi da 29 ngay
	((d<=0||d>=31)||(m!=4&&m!=6&&m!=9&&m!=11)||y<=0)&&					 //Nhan vao thang co toi da 30 ngay
	((d<=0||d>=32)||(m!=1&&m!=3&&m!=5&&m!=7&&m!=8&&m!=10&&m!=12))||y<=0);//Nhan vao thang co toi da 31 ngay
	
	if (y%4==0) printf("%d/%d/%d la ngay thuoc nam nhuan",d,m,y);
	else printf("%d/%d/%d khong phai la ngay thuoc nam nhuan",d,m,y);
}