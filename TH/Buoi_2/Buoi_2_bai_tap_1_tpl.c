#include <stdio.h>
void main()
{
    char ten[6];
    const int nam_hien_tai=2023,nam_sinh;
    float chieu_cao,can_nang;
    printf("Nhap ten cua ban : ");
    scanf("%s",&ten);
    printf("Ban sinh nam bao nhieu : ");
    scanf("%d",&nam_sinh);
    int tuoi=nam_hien_tai-nam_sinh;
    printf("Nhap chieu cao cua ban(m): ");
    scanf("%f",&chieu_cao);
    printf("Nhap can nang cua ban(kg): ");
    scanf("%f",&can_nang);
    printf("--------------------------------\n");
    if (chieu_cao<=0||can_nang<=0){ //Chieu cao va can nang phai lon hon khong
    	printf("=> Ban da nhap sai. Vui long chay lai chuong trinh !");
	}else {
    	printf("Xin chao %s. \n",ten);
    	printf("Vao nam %d ban %d tuoi. \n",nam_hien_tai,tuoi);
    	float bmi = can_nang/(chieu_cao*chieu_cao);//Tinh chi so BMI
    	printf("\aChi so BMI cua ban la: %.2f.\n",bmi);
    	printf("Ban la mot nguoi %s hon so voi trung binh.\n",(chieu_cao>=1.68?"cao":"thap"));
    	printf("Ban la co than hinh %s.",(bmi<18.5?"mong manh":(bmi<=25?"can doi":"mum mim")));
	}
}