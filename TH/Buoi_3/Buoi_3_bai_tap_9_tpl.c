#include<stdio.h>
void main()
{
	int d,m,y;
	printf("Nhap vao ngay : ");	scanf("%d",&d);
	printf("Nhap vao thang : ");	scanf("%d",&m);
	printf("Nhap vao nam : ");	scanf("%d",&y);
	
	switch (m) 
	{
		case 2:
			if (1<=d&&d<=29&&y>0) printf("%d/%d/%d la ngay hop le ",d,m,y);
			else printf("%d/%d/%d la ngay khong hop le ",d,m,y);	break;
		case 1:	case 3:	case 5:	case 7: case 8: case 10: case 12:
			if (1<=d&&d<=31&&y>0) printf("%d/%d/%d la ngay hop le ",d,m,y);
			else printf("%d/%d/%d la ngay khong hop le ",d,m,y);	break;
		case 4:	case 6:	case 9:	case 11:
			if (1<=d&&d<=30&&y>0) printf("%d/%d/%d la ngay hop le ",d,m,y);
			else printf("%d/%d/%d la ngay khong hop le ",d,m,y);	break;
		default : printf("%d/%d/%d la ngay khong hop le ",d,m,y);	break;			
	}	
}