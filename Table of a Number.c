#include<stdio.h>
int main()
{
	int i,n,j,t;
	printf("Enter the Number : ");
	scanf("%d",&i);
	printf("Enter the Number of times in a Table : ");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		t=i*j;
		printf("%d x %d = %d\n",i,j,t);
	}
	
	
}
