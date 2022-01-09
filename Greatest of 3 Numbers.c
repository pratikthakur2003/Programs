//Program to find the greatest of 3 Numbers.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three Numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("%d is the Greatest Number",a);
	}
	else if(b>=c && b>=a)
	{
		printf("%d is the Greatest Number",b);
	}
	else
	{
		printf("%d is the Greatest Number",c);
	}
}
