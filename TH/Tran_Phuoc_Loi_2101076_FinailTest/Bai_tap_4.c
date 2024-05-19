#include<stdio.h>//Sử dụng xuất nhập dử liệu
#include<math.h>//Sử dụng để tính toán
#include<stdlib.h>//Sử dụng hàm system(cls); để xóa màng hình làm việc gọn gàng hơn
#include<conio.h>//Sử dụng hàm getch(); để xem kết quả trước khi bị xóa

void Bai_tap_1();
void Bai_tap_2();
void Bai_tap_3();

void main()
{
	int Choice;
	MENU:
	do
	{
		system("cls");//Xóa màng hình những phần đã thực hiện trước đó
		printf("=====MSSV: 2101076 TEST FINAL=====\n");
		printf("1. Bai 1\n2. Bai 2\n3. Bai 3\n4.Thoat\n");
		printf("Moi ban chon chuc nang (1-4):");scanf("%d",&Choice);
		if (Choice<1||Choice>4)//Nếu nhập sai sẽ cảnh báo
			{
				printf("Nhap sai vui long nhap lai !");
				printf("\nNhap phim bat ki de quay lai...");
				getch();//Dừng lại xem trước khi bị xóa
			}
		system("cls");//Xóa màng hình những phần đã thực hiện trước đó
	}while(Choice<1||Choice>4);
		switch (Choice)
		{
		case 1:
			printf("-----------------------------------------------\n");
			printf("Bai tap 1\n");
			printf("-----------------------------------------------\n");
			Bai_tap_1();//Gọi hàm con
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;
		case 2: 
			printf("-----------------------------------------------\n");
			printf("Bai tap 2\n");
			printf("-----------------------------------------------\n");
			Bai_tap_2();//Gọi hàm con
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;
		case 3:
			printf("-----------------------------------------------\n");
			printf("Bai tap 3\n");
			printf("-----------------------------------------------\n");
			Bai_tap_3();//Gọi hàm con
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;
		case 4: printf("\nChuong trinh ket thuc !");
	}
}
void Bai_tap_1()
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

void Bai_tap_2()
{
	float a,b;
	printf("Nhap vao :\n");
	printf("a = ");scanf("%f",&a);
	printf("b = ");scanf("%f",&b);
	printf("Tong(a+b) = %f\n",a+b);
	printf("Hieu(a-b) = %f\n",a-b);
	printf("Tich(a*b) = %f\n",a*b);
	printf("Thuong(a/b) = %f\n",a/b);
}

int nhap_mang(int mang[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        while (1)
		{
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &mang[i]);
            if (mang[i] > 0) break;
            else printf("Phan tu khong hop le. Vui long nhap lai.\n");
        }
    }
}

void xuat_mang_dao_nguoc(int mang[], int n)
{
    int i;
    printf("Mang dao nguoc: ");
    for (i = n - 1; i >= 0; i--)
	{
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int tinh_tich_so_chan(int mang[], int n)
{
    int i, tich = 1;
    for (i = 0; i < n; i++)
	{
        if (mang[i] % 2 == 0)
		{
            tich *= mang[i];
        }
    }
    return tich;
}

void Bai_tap_3()
{
    int n, i;
    do
    {printf("Nhap so phan tu cua mang(n>0): "); scanf("%d", &n);
	}while (n<1);
    int mang[n];
    nhap_mang(mang, n);
    xuat_mang_dao_nguoc(mang, n);
    int tich = tinh_tich_so_chan(mang, n);
    printf("Tich cac so chan trong mang: %d\n", tich);
}