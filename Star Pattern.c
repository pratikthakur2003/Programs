#include<stdio.h>
int main()
{
	int i,j;
	j=1;
	while (j<=4)
	{
		for(i=1;i<=4;i++)
		{
			printf("* ");
		}
		j++;
		printf("\n");
	}
	
	return 0;
}
