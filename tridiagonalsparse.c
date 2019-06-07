#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,N,*p,x,i,j,l;
printf("Enter size of array\n");
scanf("%d",&n);
N=3*n-2;
p=(int *)malloc(N*sizeof(int));
printf("Enter the elements\n");
	for(i=1;i<=n;i++)
	 {
	   for(j=1;j<=n;j++)
	   {
		if(j==i-1 || j==i || j==i+1)
		{
		  scanf("%d",&x);
		  l=2*i+j;
		  p[l]=x;
		}
	   }
	}
printf("Tridiagonal sparse matrix is:\n");
	for(i=1;i<=n;i++)
	 {
	   for(j=1;j<=n;j++)
	   {
		if(j==i-1 || j==i || j==i+1)
		{
		
		  l=2*i+j;
		  printf("%d ",p[l]);
		}
		else
		{
		  printf("0 ");
		}
	   }
	 printf("\n");
	}
free(p);
return 0;
}
