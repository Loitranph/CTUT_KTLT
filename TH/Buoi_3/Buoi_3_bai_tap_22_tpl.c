#include<stdio.h>
void main()
{
	int i=1,s=0;
	while(1)//Luon dung
	{
		s=s+i++;//s=s+1 ; sau do i=2
		if(i%2)
			i=i+2;
		else
			i=i+1;//i=3
		if(i>20)
				break;
	}
	printf("%d",s);
}