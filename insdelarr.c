#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int *p,c,d,x,i;
	p=(int*)malloc(5*sizeof(int));
	printf("enter 5 elements of array\n");
	for(i=1;i<=5;i++)
	{
	 scanf("%d", &p[i]);
	}
	printf("enter position to be deleted:");
	scanf("%d", &c);
	d=c;
	while(d<=4)
	{
	 p[d]=p[d+1];
	 d++;
	}
	printf("elements after deletion are:\n");
	for(i=1;i<=4;i++)
	{
	 printf("%d,",p[i]);
	}
	free(p);
	return 0;
}
	
	  
	 
	
