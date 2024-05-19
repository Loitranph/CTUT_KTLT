#include<stdio.h>
#include<math.h>
void main()
{
	float xA,yA,xB,yB;
	printf("Nhap vao toa do diem A(xA,yA):\n");
	scanf("%f %f",&xA,&yA);
	printf("Nhap vao toa do diem B(xB,yB):\n");
	scanf("%f %f",&xB,&yB);
	float xBA=xB-xA,yBA=yB-yA;
	printf("-----------------------------------------------\n");
	printf("=> Khoang cach giua 2 diem A va B la : %.4f",fabs(sqrt((xBA*xBA)+(yBA*yBA))));
}