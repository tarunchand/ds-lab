#include<stdio.h>
#include<stdlib.h>
int main()
{
int r,c,t,k,**p,x,i,j,l;
printf("Enter order of sparse matrix\n");
scanf("%d %d",&r,&c);
p=(int**)malloc(r*sizeof(int*));
	for(i=1;i<=r;i++)
	 {
	   p[i]=(int*)malloc(c*sizeof(int));
	 }
printf("Enter the no. of non-zero elements\n");
scanf("%d",&t);
p[1][1]=r;
p[1][2]=c;
p[1][3]=t;
printf("Enter the elements\n");
	for(i=2;i<=t+1;i++)
	 {
	   for(j=1;j<=3;j++)
	   {
		scanf("%d",&p[i][j]);
	   }
	}
k=2;
printf("The general sparse matrix is:\n");
	for(i=1;i<=r;i++)
	{
	  for(j=1;j<=c;j++)
	  {
	     if(i==p[k][1] && j==p[k][2])
		{
		  printf("%d ",p[k][3]);
		  k++;
		}
	     else
		{
		  printf("0 ");
		}
	   }
	 printf("\n");
	}
free(p);
return 0;
}
