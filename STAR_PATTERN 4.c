#include<stdio.h>
#define row 5
#define col 5
int main(void)
{
	int i,j,k;
	for(i=row-1;i>=0;i--)
	{
		for(k=0;k<row-i-1;k++)
		{
			printf(" ");
		}
		
		for(j=0;j<(i*2)+1;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
