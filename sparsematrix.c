#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int i,j,k,n;
	printf("Enter order of the matrix:");
	scanf("%d",&n);
	int**a=(int**)malloc(n*sizeof(int*));
	for(k=1;k<=n;k++)
	{
	 a[k]=(int*)malloc(n*sizeof(int));
	}
	printf("Enter elements of the matrix\n");
		for(i=1;i<=n;i++)
		{
		 for(j=1;j<=n;j++)
		  {
		    scanf("%d",&a[i][j]);
		  }
		}
	
