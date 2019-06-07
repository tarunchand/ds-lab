#include<stdio.h>
#include<stdlib.h>
/*int partition(int*,int,int);
void qsort(int*,int,int);*/


int partition(int *p,int m,int n)
{
int i,j,k,temp;
i=m;j=n;k=p[m];
	while(i<=j)
	{
	  while(p[i]<=k)
	  {
	    i=i+1;
	   }
	  while(p[j]>=k)
	  {
	   j=j-1;
	  }
	 if(i<j)
	{
	 temp=p[i];
	 p[i]=p[j];
	 p[j]=temp;
	}
	}
p[m]=p[j];
p[j]=k;
return j;
}
void qusort(int *p,int m,int n)
{
int j;
	if(m<n)
	{
	  j=partition(p,m,n);
	  qusort(p,m,j-1);
	  qusort(p,j+1,m);
	}
}
int main()
{
int *p,i,j,n,k,mid;
printf("Enter size of array:");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&p[i]);
	}
qusort(p,0,n-1);
printf("Array after sorting is:");
	for(i=0;i<n;i++)
	{
	  printf("%d ",p[i]);
	}
return 0;
}
