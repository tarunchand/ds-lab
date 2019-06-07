#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,j,k,m,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	p=(int *)malloc((n+1)*sizeof(int));
	printf("Enter the array elements:\n");
		for(i=1;i<=n;i++)
		{
		  scanf("%d",&p[i]);
		}
        p[0]=-10000;
	printf("elements after insertion sort are:\n");
	for(i=1;i<=n;i++)
	{ k=i;
	 for(j=1;j<=i;j++)
	 {
	  if(p[k]<p[--k])
          {
	   temp=p[k];
	   p[k]=p[k+1];
	   p[k+1]=temp;
          }
	 }
	for(m=1;m<=n;m++)
	{
	  printf("%d ",p[m]);
	}
	printf("\n");
	}
free(p);
return 0;
}

