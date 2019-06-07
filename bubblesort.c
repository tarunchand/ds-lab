#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int *p,c,d,x,i;
	p=(int*)malloc(5*sizeof(int));
	if(p==NULL)
	{
	 printf("Memory allocation failed");
	 exit(1);
	}
	printf("enter 5 elements of array\n");
	for(i=0;i<5;i++)
	{
	 scanf("%d", &p[i]);
	}
		for(c=0;c<5;c++)
		{
		 for(d=0;d<4-c;d++)
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
	for(i=0;i<5;i++)
	{
	 printf("%d,",p[i]);
	}
	free(p);
	return 0;
}
