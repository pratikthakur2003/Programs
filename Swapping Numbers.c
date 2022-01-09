#include<stdio.h>
main()
{
	int a = 5;
	int b = 6;
	printf("a = %d , b = %d\n",a,b);
	
	/*
	a = a+b;
	b = a-b;          -->First Method
	a = a-b;
	*/
	
	/*
	a = a^b;
	b = a^b;		  -->Second Method
	a = a^b;
	*/
	
	b=a+b-(a=b);    //-->Third Method
	
	printf("a = %d , b = %d\n",a,b);
}
