#include<stdio.h>
void main()
{
	int n,i,j=2,kt,snt=0;
	do
	{
		printf("Nhap vao n = ");	scanf("%d",&n);
	}while (n<=0);
	
	do
	{
		kt=1;
		for (i=2;i<j;i++)
			if (j%i==0)
			{
				kt=0;
				break;
			}
		if (kt==1)
		{
			printf("%d ",j);
			snt++;
		} 
		j++;
	}while (j<n);
}