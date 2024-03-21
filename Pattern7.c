#include<stdio.h>
void main()
{
int n,i,j,k='a';
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",k++);
		}
		printf("\n");
	}	
}
