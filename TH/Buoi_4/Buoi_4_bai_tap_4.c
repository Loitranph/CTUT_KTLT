#include <stdio.h>
#include <math.h>

int main()
{
    int choice, n, x, i, max, min, check;

    do
    {
        printf("===== MENU =====\n");
        printf("1. Chay bai 1\n");
        printf("2. Chay bai 2\n");
        printf("3. Chay bai 3\n");
        printf("4. Thoat khoi chuong trinh\n");
        printf("================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);
            int i = min;
            double tong = 0;
            int dem = 0;
            while (i <= max)
            {
                if (i % 2 == 0)
                {
                    tong += i;
                    dem++;
                }
                i++;
            }
            if (dem == 0)
                printf("Khong ton tai so chia het cho 3!");
            else
            {
                double tbc = tong / dem;
                printf("Trung binh tong cac so chia het cho 2 tu %d -> %d: %.2f\n\n", min, max, tbc);
            }
            break;
        case 2:
            printf("Nhap vao n: ");
            scanf("%d", &n);
            check = 1;
            for (i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                    check = 0;
            }
            if (check)
                printf("%d la SNT\n\n", n);
            else
                printf("%d ko la SNT\n\n", n);
            break;
        case 3:
            printf("Nhap vao so x: ");
            scanf("%d", &x);
            for (i = 0; i <= sqrt(x); i++)
                if (i * i == x)
                {
                    printf("%d la so chinh phuong\n\n", x);
                    return;
                }
            printf("%d ko la so chinh phuong\n\n", x);
            break;
        case 4:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Khong hop le. Lua chon lai!\n");
            break;
        }
    } while (choice != 6);

    return 0;
}
