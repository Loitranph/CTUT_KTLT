#include<stdio.h>
#include<math.h>

int ktsnt(int n)
{
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // kiem tra so nguyen to khi n >= 2
    int i, kt = sqrt(n);
    for (i = 2; i <= kt; i++)
        if (n % i == 0)   return 0;
    return 1;
}
void main()
{
	int n;
	do
	{
		printf("Nhap n = "); scanf("%d", &n);	
	}while (n<=0);
    printf("%d so nguyen to dau tien la: \n",n);
    int dem = 0; // dem tong so nguyen to
    int i = 2;   // tim so nguyen to bat dau tu so 2
    while (dem < n)
	{
        if (ktsnt(i))
		{
            printf("%d ",i);
            dem++;
        }
        i++;
    }
}