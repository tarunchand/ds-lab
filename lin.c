#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n,*a,i=0,j;
char ch[10];
do
{
 a=(int *)malloc(sizeof(int));
 printf("\npush the element in stack:\n");
 ++i;
 scanf("%d",&a[i]);
 
 printf("stack after pushing is:\n");
 for(j=1;j<=i;j++)
 {
  printf("%d ",a[j]);
 }
 printf("\ndo you want to push further elements?\n");
 scanf("%s",ch);
}
while(strcmp(ch,"yes")==0);
 printf("\ndo you want to pop an element?\n");
 scanf("%s",ch);
 while(strcmp(ch,"yes")==0)
{
 n--;
 for(i=1;i<=n;i++)
 { 
  printf("%d ",a[i]);
 }
 printf("\ndo you want to pop an element?\n");
 scanf("%s",ch);
}
printf("stack after pushing and popping is:\n");
for(i=1;i<=n;i++)
{
 printf("%d ",a[i]);
}
return 0;
}
 

 
