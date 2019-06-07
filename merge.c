#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,N,*p,*q,x,i,j,l,*r,k=0;

printf("Enter size of array\n");
scanf("%d",&n);
N=n*(n+1)/2;
p=(int *)malloc(N*sizeof(int));
q=(int *)malloc(N*sizeof(int));
r=(int *)malloc(N*sizeof(int));
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
printf("Enter the elements of array\n");
	for(i=1;i<=n;i++)
	 {
	   for(j=1;j<=n;j++)
	 {
	    if(i<=j)
	   {
           l=j*(j+1)/2+i;
	   scanf("%d",&x);
	   q[l]=x;
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
	   printf("%d ",q[l]);
	   }
	   else
	   {
		printf("0 ");
	   }
	 }
	printf("\n");
	}
	
printf("Merged matrix is\n");
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=n+1;j++)
	  {
		if(i>j)
	   {
           l=i*(i+1)/2+j;
	   r[k++]=p[l];
	   }
		else if(i<j)
	   {
	     l=j*(j+1)/2+i;
	   r[k++]=q[l];
	   }
		else if(i==j)
	   {
	     
	     
	}
	}
k=0;
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=n+1;j++)
	  {
              if(i>=j)
		printf("%d ",r[k++]);
             else if(i<=j)
                printf("%d ",r[k++]); 
	  }
	printf("\n");
	}
free(p);
free(q);
free(r);
return 0;
}
           
