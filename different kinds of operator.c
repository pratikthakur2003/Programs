#include<stdio.h>
main()
{
	int a,b,c,d;
	a=15;
	b=10;
	c = ++a - b;
	printf("a = %d b = %d c = %d\n",a,b,c);
	d = b++ + a;
	printf("a/b = %d\n",a/b);
	printf("a%%b = %d\n",a%b);
}
