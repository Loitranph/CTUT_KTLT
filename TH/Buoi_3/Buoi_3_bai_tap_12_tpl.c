#include<stdio.h>
#include<math.h>
void main()
{
	int x ; float a,b,c; const float pi =3.141593 ; float bk ;
	
		printf("Tinh chu vi (C) va dien tich (S)\n");
		printf("1.Hinh tam giac\n");
		printf("2.Hinh vuong\n");
		printf("3.Hinh chu nhat\n");
		printf("4.Hinh tron\n");
		printf("Nhap lua chon cua ban 1 2 3 4     \n");
		printf("Toi lua chon : "); 		scanf("%d",&x);
		printf("\n--------------------------------\n");
	
	switch (x)
	{
	case 1:
		printf("Nhap vao do dai canh a = ");	scanf("%f",&a);
		printf("Nhap vao do dai canh b = ");	scanf("%f",&b);
		printf("Nhap vao do dai canh c = ");	scanf("%f",&c);
		float cv=a+b+c , p=cv/2 , dt=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi (C) cua hinh tam giac la %.2f   \n",cv);
		printf("Dien tich (S) cua hinh tam giac la %.2f\n",dt);
														 break;
	case 2:
		printf("Nhap vao do dai canh a cua hinh vuong ; a = ");	
		scanf("%f",&a) ;			  float c=4*a , s=pow(a,2);
		printf("Chu vi (C) cua hinh hinh vuong la C=%.2f\n",c);
		printf("Dien tich (S) cua hinh vuong la S=%.2f  \n",s);
														 break;
	case 3:
		printf("Nhap vao do dai canh a = ");	scanf("%f",&a);
		printf("Nhap vao do dai canh b = ");	scanf("%f",&b);
		float cvv=(a+b)*2 , sv=a*b ;
		printf("Chu vi (C) cua hinh chu nhat la C=%.2f\n",cvv);
		printf("Dien tich (S) cua chu nhat la S=%.2f   \n",sv);
														 break;
	case 4:
		printf("Nhap vao ban kinh r = ");	   scanf("%f",&bk);
		float cht=2*pi*bk , sht=pi*pow(bk,2);
		printf("Chu vi (C) cua tron la S=%.2f         \n",sht);
		printf("Dien tich (S) cua tron la S=%.2f      \n",sht);
														 break;
	default : printf("Lua chon cua ban khong hop le ");	 break;	
	}	
}