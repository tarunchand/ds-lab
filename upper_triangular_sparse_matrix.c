#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,N,*p,x,i,j,l;

printf("Enter size of array\n");
scanf("%d",&n);
N=n*(n+1)/2;
p=(int *)malloc(N*sizeof(int));
printf("Enter the elements of array\n");
	for(i=1;i<=n;i++)
	 {
	   for(j=1;j<=n;j++)
	 {
	    if(i<=j)
	   {
           l=j*(j+1)/2+i;
	   scanf("%d",&x);
	   p[l]=x;
	   }
	 }
	}
printf("Upper triangular sparse matrix is:\n");
	
	for(i=1;i<=n;i++)
	 {
	   for(j=1;j<=n;j++)
	 {
	    if(i<=j)
	   {
           l=j*(j+1)/2+i;
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
	
	  


