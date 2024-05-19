#include <stdio.h>
#include <math.h>

int main() //cau 3
{
    int x;
    printf("Nhap vao so x: ");
    scanf("%d", &x);
	int i;
	for (i = 0; i <= sqrt(x); i++)
        if (i * i == x)
        {
            printf("%d la so chinh phuong", x);
            return 0;
        }
    printf("%d ko la so chinh phuong", x);
}
