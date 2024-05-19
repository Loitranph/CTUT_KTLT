#include <stdio.h>
#include <math.h>

int main() //cau 2
{
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    int i, check = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            check = 0;
    }
    if (check)
        printf("%d la SNT", n);
    else
        printf("%d ko la SNT", n);
}
