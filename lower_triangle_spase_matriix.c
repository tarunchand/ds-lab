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
	    if(i>=j)
	   {
           l=i*(i+1)/2+j;
	   scanf("%d",&x);
	   p[l]=x;
	   }
	 }
	}
printf("Lower triangular sparse matrix is:\n");
	
	for(i=1;i<=n;i++)
	 {
	   for(j=1;j<=n;j++)
	 {
	    if(i>=j)
	   {
           l=i*(i+1)/2+j;
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
	
	  


