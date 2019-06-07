#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int *p,c,d,x,i,m,n,first,last,middle;
	printf("Enter size of array:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
	 scanf("%d", &p[i]);
	}
		for(c=0;c<n;c++)
		{
		 for(d=0;d<n-c-1;d++)
		  {
			if(p[d]>p[d+1])
			{
			  x=p[d];
			  p[d]=p[d+1];
			  p[d+1]=x;
			}
		  }
		}
	printf("Sorted elements are:\n");
	for(i=0;i<n;i++)
	{
	 printf("%d,",p[i]);
	}
printf("Enter element to be searched:");
scanf("%d",&m);
first=0;
last=n-1;
middle=(first+last)/2;
	while(m!=p[middle])
	{
	  if(m>p[middle])
	   {
	     first=middle+1;
	   }
	else if(m<p[middle])
	   {
	     last=middle-1;
	    }
	 middle=(first+last)/2;
	}
printf("%d found at %d\n",m,middle+1);
free(p);
return 0;
}
	
