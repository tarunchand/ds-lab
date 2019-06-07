#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,j,k,m,small;
	printf("Enter size of array:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the array elements:\n");
		for(i=1;i<=n;i++)
		{
		  scanf("%d",&p[i]);
		}
	printf("elements after selection sort are:\n");
	for(i=1;i<=n;i++)
	{
	  small=p[i];
	  m=i;
	  for(j=i;j<=n;j++)
	 {
	   if(small>p[j])
	   {
	     small=p[j];
	     m=j;
	   }
	 }
	p[m]=p[i];
	p[i]=small;
	 for(k=1;k<=n;k++)
	  {
	    printf("%d ",p[k]);
	  }
	printf("\n");
	}
free(p);
return 0;
}
	
