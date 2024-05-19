#include<stdio.h>
void main()
{
	int lcb , hra , ta , khac ;
	int vnd = 23450 ;
printf("Nhap vao LUONG CO BAN cua nhan vien (USD): ");
scanf("%d",&lcb);
printf("Nhap vao HRA cua nhan vien (USD): ");
scanf("%d",&hra);
printf("Nhap vao TA cua nhan vien (USD): ");
scanf("%d",&ta);
printf("Nhap vao so tien KHAC cua nhan vien (USD): ");
scanf("%d",&khac);
	float da = 0.12*lcb;
	float pf = 0.14*lcb;
	float it = 0.15*lcb;
printf("---------------------------------------------------------\n");
printf("Tien THUE cua nhan vien la %.0f Dollars.\n",pf+it);
printf("Tuong duong voi %.0f VND.\n",(pf+it)*vnd);
	float ltl_dolars = lcb+hra+ta+khac+da+(pf+it);
printf("---------------------------------------------------------\n");
printf("=> LUONG THUC LANH cua nhan vien la %.0f  Dollars.\n",ltl_dolars);
printf("Tuong duong voi %.0f VND.",ltl_dolars*vnd);
}
