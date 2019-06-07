#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,x;
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
	printf("Enter the element to be searched:");
	scanf("%d",&x);
	for(i=0;i<5;i++)
	{
	 if(p[i]==x)
	 {
	  printf("%d found at %d",x,i+1);
	  break;
	 }
	}
	free(p);
	return 0;
	
} 
