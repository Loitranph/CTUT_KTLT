#include<stdio.h>
#include<math.h>
void main()
{
	//nhap so lieu
	float xC,yC,r,xM,yM;
	printf("Nhap toa do tam C(xC,yC): \n ");
	scanf("%f %f",&xC,&yC);
	printf("Nhap ban kinh R cua duong tron tam C: \n");
	scanf("%f",&r);
	printf("Nhap toa do diem M(xM,yM): \n");
	scanf("%f %f",&xM,&yM);
	//xu li so lieu
	float d = fabs(sqrt(((xM-xC)*(xM-xC))+(yM-yC)*(yM-yC)));
	printf("--------------------------------\n");
	//xuat ket qua
	//Cach 1 dung toan tu dieu kien
	printf("=> Diem M nam %s duong tron tam C !",
	(d==r)?"tren":((d>r)?"ngoai":"trong"));	
	//Cach 2 dung cau lenh if else
/*	if(d==r) {
		printf("=> M nam tren duong tron tam C !");
	}else if(d>r) {
		printf("=> M nam ngoai duong tron tam C !");
	}else { 
		printf("=> M nam trong duong tron tam C !");
	}
*/
}