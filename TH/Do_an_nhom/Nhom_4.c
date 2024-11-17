/*----------------------------------------------------------------------------------

						Created on Wednesday May 10 2023

									Group 4:
							1 Trần Phước Lợi 2101076
							2 Dương Thị Cẩm Nhung 2101587
							3 Trần Hoài Phúc 2100497
							4 Nguyễn Đặng Thuận Thành 2100749
							5 Phan Liên Hữu Tình 2100259

									Project: Menu

-----------------------------------------------------------------------------------*/

//Khai báo thư viện

#include<stdio.h>//Sử dụng xuất nhập dử liệu
#include<math.h>//Sử dụng để tính toán
#include<stdlib.h>//Sử dụng hàm system(cls); để xóa màng hình làm việc gọn gàng hơn
#include<conio.h>//Sử dụng hàm getch(); để xem kết quả trước khi bị xóa

//Khai báo hàm con

void Luy_thua();
void Giai_thua();
void Ktr_snt();
void Snt_n();
void Gpt_b1();
void Gpt_b2();
void Hcn_rong();

//------------------------------------Hàm chính---------------------------------
	
void main()
{

	//-----------------------------Phần khai báo biến--------------------------

	int Choice ;

	//------------------------------Phần nhập liệu-----------------------------

	MENU://Nhản để trở về MENU bằng hàm goto
	do
	{
		system("cls");//Xóa màng hình những phần đã thực hiện trước đó
		printf("\n------------------------------------MENU------------------------------------\n");
		printf("----------------------------------------------------------------------------\n");
		printf("\t1. Thuc thi Ham luy thua x^y\n");
		printf("\t2. Thuc thi Ham tinh giai thua n!\n");
		printf("\t3. Thuc thi Ham kiem tra so nguyen to\n");
		printf("\t4. Thuc thi Ham in danh sach cac so nguyen to <n\n");
		printf("\t5. Thuc thi Ham tinh phuong trinh bac 1 a.x + b = 0\n");
		printf("\t6. Thuc thi Ham tinh phuong trinh bac 2 a.x2 + b.x + c = 0\n");
		printf("\t7. Thuc thi Ham in ra hinh chu nhat rong kich thuoc 2.n x n\n");
		printf("\t8. Thoat\n");
		printf("----------------------------------------------------------------------------\n");
		printf("\t\t\tVui long chon so [1-8]\n");
		printf("Lua chon cua ban la : ");
		scanf("%d",&Choice);
		if (Choice<1||Choice>8)
		{
			printf("\nNhap sai vui long nhap lai !\n");
			printf("\nNhap phim bat ki de quay lai...");
			getch();
		}
		system("cls");//Xóa màng hình để thực hiện nhiệm vụ khác
	}while (Choice<1||Choice>8);//Lập lại khi người dùng nhập sai

	//------------------------Phần xữ lí chương trình--------------------------

	switch (Choice)
	{
		case 1:
			Luy_thua();//Gọi hàm con
			printf("-----------------------------------------------\n");
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;//Trở về MENU
		case 2:
			Giai_thua();//Gọi hàm con
			printf("-----------------------------------------------\n");
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;//Trở về MENU
		case 3:
			Ktr_snt();//Gọi hàm con
			printf("-----------------------------------------------\n");
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;//Trở về MENU
		case 4:
			Snt_n();//Gọi hàm con
			printf("\n-----------------------------------------------\n");
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;//Trở về MENU
		case 5:
			Gpt_b1();//Gọi hàm con
			printf("\n-----------------------------------------------\n");
			printf("\n\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;//Trở về MENU
		case 6:
			Gpt_b2();//Gọi hàm con
			printf("\n-----------------------------------------------\n");
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;//Trở về MENU
		case 7:
			Hcn_rong();//Gọi hàm con
			printf("\n-----------------------------------------------\n");
			printf("\nNhan phim bat ki de quay lai MENU...");
			getch();//Dừng lại xem kết quả trước khi về Menu
			goto MENU;//Trở về MENU
		case 8://Kết thúc chương trình và phát âm báo
			printf("--------------------------------\n");
			printf("\aChuong trinh ket thuc !");
			//break;//Thoát
	}
}

//------------------------------------Các hàm con---------------------------------

//1.Hàm tính lũy thừa

	void Luy_thua()
	{
		float x,y;
		printf("-----------------------------------------------\n");
		printf("Ham luy thua x^y\n");
		printf("-----------------------------------------------\n");
		printf("Nhap vao co so x = ");
		scanf("%f",&x);
		printf("Nhap vao so mu y = ");
		scanf("%f",&y);
		printf("-----------------------------------------------\n");
		printf("%.2f ^ %.2f = %.2f\n",x,y,pow(x,y));
	}
	
//2.Hàm tính giai thừa

	void Giai_thua()
	{
		int x,y,z;
		printf("-----------------------------------------------\n");
		printf("Ham tinh giai thua n!\n");
		printf("-----------------------------------------------\n");
		do//Số cần tính giai thừa phải > 0
		{
			printf("Nhap vao gia tri n(n>=0) = ");
			scanf("%d",&x);
			if (x<0)
			{
				system("cls");//Xóa màng hình phần nhập sai
				printf("-----------------------------------------------\n");
				printf("Ham tinh giai thua n!\n");
				printf("-----------------------------------------------\n");
			}
		}while (x<0);
		printf("-----------------------------------------------\n");
		y=1;//Cho biến kết quả là 1
		for (z=1;z<=x;z++)
			y=y*z;
		printf("%d! = %d\n",x,y);
	}

//3.Hàm kiểm tra số nguyên tố

	void Ktr_snt()
	{
		int x,y,z;
		printf("-----------------------------------------------\n");
		printf("Ham kiem tra so nguyen to\n");
		printf("-----------------------------------------------\n");
		printf("Nhap vao gia tri n = ");
		scanf("%d",&x);
		printf("-----------------------------------------------\n");
		y = 0;//Cho số nghiệm của n=0
		if (x<2)//Các số <2 không phải là số nguyên tố
      	  	printf("%d khong phai la so nguyen to\n",x);
    	else //Kiểm tra số nguyên tố
    	{
        	for (z = 1;z<=x;z++)
			{
				if(x%z==0)
					y+=1;//Đếm số nghiệm của n
			}
        	if (y==2)//Nếu có đúng 2 nghiệm thì là số nguyên tố
				printf("%d la so nguyen to\n",x);
			else
				printf("%d khong phai la so nguyen to\n",x);
    	}
	}

//4.Hàm xuất các số nguyên tố bé hơn n

	void Snt_n()
	{
		int x,y,z=2,n;
		printf("-----------------------------------------------\n");
		printf("Ham in danh sach cac so nguyen to < n\n");
		printf("-----------------------------------------------\n");
		do
		{
			printf("Nhap vao n(n>0) = ");
			scanf("%d",&x);
			if (x<0)
			{
				system("cls");//Xóa màng hình phần nhập sai
				printf("-----------------------------------------------\n");
				printf("Ham in danh sach cac so nguyen to < n\n");
				printf("-----------------------------------------------\n");
			}	
		}while (x<=0);
		printf("-----------------------------------------------\n");
		if (x<=2)//Số 2 là số nguyên tố bé nhất
			printf("Khong co so nguyen to < 2\n");
		else
		{
			printf("Cac so nguyen to < %d la :",x);
			do
			{
				n=1;//Cho biến kiểm tra bằng 1
				for (y=2;y<z;y++)
				{
					if (z%y==0)//Nếu chia hết cho số bé hơn thì không là số nguyên tố
					{
						n=0;
						break;//Trả về kết quả 0 và kiểm tra số khác
					}
				}	
				if (n==1)//Nếu biến kiểm tra là 1 thì là số nguyên tố và in ra
				printf(" %d",z);
			z++;
			}while (z<x);
		}	
	}
	
//5.Hàm giải phương trình bậc nhất

	void Gpt_b1()
	{
		float x,y,z;//Các số a b nhập vào có thể là số thực(phân số)
		printf("-----------------------------------------------\n");
		printf("Ham tinh phuong trinh bac 1 a.x + b = 0\n");
		printf("-----------------------------------------------\n");
		do
		{
			printf("Nhap vao he so cua a(a khac 0) = ");
			scanf("%f",&x);
			if (x==0)//Nếu a=0 thì phải nhập lại
			{
				system("cls");//Xóa màng hình phần nhập sai
				printf("-----------------------------------------------\n");
				printf("Ham tinh phuong trinh bac 1 a.x + b = 0\n");
				printf("-----------------------------------------------\n");
			}
		}while (x==0);
		printf("Nhap vao he so cua b = ");
		scanf("%f",&y);
		printf("-----------------------------------------------\n");
		//Xuất đúng dấu hệ số của b
		if (y==0)
			printf("Nghiem cua phuong trinh %.2f.x = 0 la :",x);
		else if (y>0)
			printf("Nghiem cua phuong trinh %.2f.x + %.2f = 0 la :",x,y);
		else 
			printf("Nghiem cua phuong trinh %.2f.x - %.2f = 0 la :",x,fabs(y));
		printf("\nx = %.2f",-y/x);//Xuất kết quả
	}

//6.Hàm giải phương trình bậc hai

	void Gpt_b2()
	{
		float a,b,c;
		printf("-----------------------------------------------\n");
		printf("Ham tinh phuong trinh bac 2 a.x2 + b.x + c = 0\n");
		printf("-----------------------------------------------\n");
		do
		{
			printf("Nhap vao he so cua a(a khac 0) = ");
			scanf("%f",&a);
			if (a==0)//Nếu a=0 thì phải nhập lại
			{
				system("cls");//Xóa màng hình phần nhập sai
				printf("-----------------------------------------------\n");
				printf("Ham tinh phuong trinh bac 2 a.x2 + b.x + c = 0\n");
				printf("-----------------------------------------------\n");
			}
		}while (a==0);
		printf("Nhap vao he so cua b = ");
		scanf("%f",&b);
		printf("Nhap vao he so cua c = ");
		scanf("%f",&c);
		printf("-----------------------------------------------\n");
		float delta=pow(b,2)-(4*a*c);//Tính delta
		if (delta==0)//Delta=0 phương trình có nghiệm kép
		{
			if (b==0&&c==0)
				printf("Phuong trinh %.2f.x2 = 0 co nghiem kep la :",a);
			else if (a>0&&b>0&&c>0)
				printf("Phuong trinh %.2f.x2 + %.2f.x + %.2f = 0 co nghiem kep la :",a,b,c);
			else if (a<0&&b<0&&c<0)
				printf("Phuong trinh %.2f.x2 - %.2f.x - %.2f = 0 co nghiem kep la :",a,fabs(b),fabs(c));
			printf("x1 = x2 = %.2f",(-b)/(2*a));
		}
		else if (delta>0)//Delta>0 phương trình có 2 nghiệm phân biệt
		{
			if (b>0&&c==0)
				printf("Phuong trinh %.2f.x2 + %.2f.x = 0 co 2 nghiem phan biet la :",a,b);
			else if (b<0&&c==0)
				printf("Phuong trinh %.2f.x2 - %.2f.x = 0 co 2 nghiem phan biet la :",a,fabs(b));
			else if (b==0&&c>0)
				printf("Phuong trinh %.2f.x2 + %.2f = 0 co 2 nghiem phan biet la :",a,c);
			else if (b==0&&c<0)
				printf("Phuong trinh %.2f.x2 - %.2f = 0 co 2 nghiem phan biet la :",a,fabs(c));
			else if (b<0&&c<0)
				printf("Phuong trinh %.2f.x2 - %.2f.x - %.2f = 0 co 2 nghiem phan biet la :",a,fabs(b),fabs(c));
			else
				printf("Phuong trinh %.2f.x2 + %.2f.x + %.2fc = 0 co 2 nghiem phan biet la :",a,b,c);
			printf("\nx1 = %.2f",(-b+sqrt(delta))/(2*a));//Nghiệm thứ nhất
			printf("\nx2 = %.2f\n",(-b-sqrt(delta))/(2*a));//Nghiệm thứ hai
		}
		else//Trường hợp delta<0 phương trình vô nghiệm
		{
			if (b==0&&c>0)//Khi a<0 b=0 c>0
				printf("Phuong trinh %.2f.x2 + %.2f = 0 vo nghiem !",a,c);
			else if (b==0&&c<0)//Khi a>0 b=0 c<0
				printf("Phuong trinh %.2f.x2 - %.2f = 0 vo nghiem !",a,fabs(c));
			else if (b<0&&c<0)
				printf("Phuong trinh %.2f.x2 - %.2f.x - %.2f = 0 vo nghiem !",a,fabs(b),fabs(c));
			else
				printf("Phuong trinh %.2f.x2 + %.2f.x + %.2f = 0 vo nghiem !\n",a,b,c);
		}		
	}

//7.Hàm vẽ hình chữ nhật rỗng

	void Hcn_rong()
	{
		int x,y,z;
		printf("-----------------------------------------------\n");
		printf("Ham in ra hinh chu nhat rong kich thuoc 2.n x n\n");
		printf("-----------------------------------------------\n");
		do
		{
			printf("Nhap vao kich thuoc n(n>0) = ");
			scanf("%d",&x);
			if (x<=0)
			{
				system("cls");//Xóa màng hình phần nhập sai
				printf("-----------------------------------------------\n");
				printf("Ham in ra hinh chu nhat rong kich thuoc 2.n x n\n");
				printf("-----------------------------------------------\n");
			}
		}while (x<=0);//Kích thước > 0
		printf("-----------------------------------------------\n");
		if (x<3) printf("Hinh chu nhat nay khong rong\n");
		printf("Day la hinh chu nhat cua ban :\n\n");
		for (z=1;z<=2*x;z++)//Cạnh ngang trên cùng = 2*cạnh
			printf("*");
		printf("\n");//Xuống dòng bắt đầu cạch thứ 2
		//Vẽ thân hình chữ nhật
		for (z=1;z<=x-2;z++)
		{
			printf("*");//Cạnh dọc trái
			for (y=1;y<=2*x-2;y++)
				printf(" ");//Khoảng trắng trừ 1 cạnh dọc trái 1 cạnh dọc phải là 2*cạnh-2
			printf("*\n");//Cạnh dọc phải và xuống dòng vẽ cạnh khác tiếp tục
		}
		//Vẽ cạnh ngang dưới
		if (x>1)//Nếu n cạnh = 1 thì không cần in cạnh dưới cùng
		{
			for (z=1;z<=2*x;z++)//Cạnh ngang dưới cùng = 2*cạnh
				printf("*");
		}
		printf("\n\nChieu dai = %d va chieu rong = %d\n",2*x,x);
	}
/*Nhóm em biết bài còn nhiều sai sót và chưa tối ưu mong thầy nhận xét và góp ý để nhóm có thể học hỏi thêm ạ,
 nhóm em xin cảm ơn !*/
