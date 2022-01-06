#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the numbers");
	scanf("%d%d",&b,&a);
	while(a>b)
	{
		printf("%d",a);
		a--;
	}
}
