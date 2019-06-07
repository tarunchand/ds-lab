#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int m,i,j,flag,l,k,smallest,largest;
	int**a=(int**)malloc(3*sizeof(int*));
	for(k=1;k<=3;k++)
	{
	 a[k]=(int*)malloc(3*sizeof(int));
	}
	printf("Enter elements of the matrix\n");
		for(i=1;i<=3;i++)
		{
		 for(j=1;j<=3;j++)
		  {
		    scanf("%d",&a[i][j]);
		  }
		}
	for(i=1;i<=3;i++)
	{
	  smallest=a[i][1];
          m=1;
	  for(j=1;j<=3;j++)
	  {
	   if(smallest>a[i][j])
	    {
		smallest=a[i][j];
		m=j;
	    }
	  }
	
	  largest=smallest;
	  for(l=1;l<=3;l++)
	   {
		if(largest<a[l][m])
		{
		  largest=a[l][m];
		}
	    }
	  if(largest==smallest)
	  {
	    printf("Saddle point of matrix is %d",largest);
	    flag=1;
	    break;
	  }

	}
	if(flag!=1)
	{
	 printf("saddle point not found");
	}
	return 0;
}

