#include<stdio.h>
#include<stdlib.h>
int *p,*q;
void merge(int,int,int);
void merges(int,int);
int main()
{
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	q=(int *)malloc(n*sizeof(int));
	printf("Enter the array elements:\n");
		for(i=1;i<=n;i++)
		{
		  scanf("%d",&p[i]);
		}
	printf("elements after merge sort are:\n");
        merges(1,n);
	for(i=1;i<=n;i++)
	{
	 printf("%d ",p[i]);
	}
return 0;
}
void merges(int low,int high)
{
	int mid;
	if(low<high)
	{
	 mid=(low+high)/2;
	 merges(low,mid);
	 merges(mid+1,high);
	 merge(low,mid,high);
	}
}	
void merge(int low,int mid,int high)
{
	int k, h=low,i=low,j=mid+1;
	while((h<=mid) && (j<=high))
	{
	   if(p[h]<=p[j])
	   {
		q[i]=p[h];
		h=h+1;
	   }
	  else
	  {
		q[i]=p[j];
		j=j+1;
	   }
	i=i+1;
	}
	if(h>mid)
	{
	  for(k=j;k<=high;k++)
	  {
		q[i]=p[k];
		i=i+1;
	  }
	 }
	else
	{
	 for(k=h;k<=mid;k++)
	 {
		q[i]=p[k];
		i=i+1;
	 }
	}
	for(k=low;k<=high;k++)
	{
	  p[k]=q[k];	
	}
}
