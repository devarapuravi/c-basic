#include<stdio.h>
void main()
{
	int a,n,i,product=1;
	printf("factorials of n \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		product*=i;
	}

		printf("%d",product);
		
	
}
