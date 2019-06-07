#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n,*a,i,j,k;
char ch[10];
printf("Enter size of queue:");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(i=1;i<=n;i++)
{
 printf("\ninsert the element in queue:\n");
 scanf("%d",&a[i]);
 printf("queue after inserting is:\n");
 for(j=1;j<=i;j++)
 {
  printf("%d ",a[j]);
 }
}
 printf("\ndo you want to delete an element?\n");
 scanf("%s",ch);
k=2;
while(strcmp(ch,"yes")==0)
{
 for(i=k;i<=n;i++)
 {
  printf("%d ",a[i]);
 }
 k++;
 printf("\ndo you want to delete an element?\n");
 scanf("%s",ch);
}
return 0;
}
 

 
