#include<stdio.h>
#include<stdlib.h>
int main()
{
int r,c,t=0,**p,**q,i,j,k;
printf("Enter order of sparse matrix\n");
scanf("%d %d",&r,&c);
p=(int**)malloc(r*sizeof(int*));
	for(i=1;i<=r;i++)
	 {
	   p[i]=(int*)malloc(c*sizeof(int));
	 }
printf("Enter the elements:\n");

	for(i=1;i<=r;i++)
	{
	  for(j=1;j<=c;j++)
	  {
	    scanf("%d",&p[i][j]);
	    if(p[i][j]!=0)
	    {
		t++;
	   }
	  }
	}
q=(int**)malloc((t+1)*sizeof(int*));
	for(i=1;i<=t+1;i++)
	 {
	   q[i]=(int*)malloc(3*sizeof(int));
	 }
q[1][1]=r;
q[1][2]=c;
q[1][3]=t;
k=1;
	for(i=1;i<=r;i++)
	{
	  for(j=1;j<=c;j++)
	  {
	    if(p[i][j]!=0)
		{
		  q[++k][1]=i;
		  q[k][2]=j;
		  q[k][3]=p[i][j];
		}
	  }
	}
printf("The general sparse matrix is:\n");
	for(i=1;i<=t+1;i++)
	{
	  for(j=1;j<=3;j++)
	   {
	     printf("%d ",q[i][j]);
	    }
 	printf("\n");
	}
free(p);
free(q);
return 0;
}
