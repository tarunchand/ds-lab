#include<stdio.h>
#include<stdlib.h>
int **mal(int n);
int main()
{
	int **p,**c,**b,i,j,k;
	p=mal(3);
	c=mal(3);
	b=mal(3);
         printf("Enter elements of 3*3 matrix\n");
        for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	   scanf("%d", &p[i][j]);
           
            }
	  printf("\n");
	}
	printf("Transpose of matrix is:\n");
	for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
	  {
	   printf("%d", p[j][i]);
	    c[i][j]=p[j][i];	
	  }
	 printf("\n");
	}
	
	  for(i=0;i<3;i++)
	  {
	     j=0;
	     b[i][j]=0;
	         for(j=0;j<3;j++)
		  {
		    for(k=0;k<3;k++)
		  {
		     b[i][j]=b[i][j]+p[i][k]*c[k][j];
		  }
	  	  }
	}
        printf("Product of matrix and its transpose is\n");
	for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
	  {
	   printf("%d", b[i][j]);
           printf(" ");
	  }
	 printf("\n");
         }
	free(c);
	free(p);
	free(b);
	return 0;
}
int **mal(int n)
{
	int k;
	int**a=(int**)malloc(3*sizeof(int*));
	for(k=0;k<3;k++)
	{
	 a[k]=(int*)malloc(3*sizeof(int));
	}
	return a;
}
