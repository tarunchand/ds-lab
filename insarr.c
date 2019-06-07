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
	printf("Enter element to be inserted:");
	scanf("%d",&c);
	printf("enter the position to insert the element:");
	scanf("%d",&d);
	x=5;
	while(x>=d)
	{
	 p[x+1]=p[x];
	 x--;
	}
	p[x]=c;
	printf("array after insertion is:\n");
	for(i=1;i<=6;i++)
	{
	 printf("%d,",p[i]);
	}
	free(p);
	return 0;
}
