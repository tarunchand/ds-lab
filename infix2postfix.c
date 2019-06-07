#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void operation(int i)
{
  do
     {
      p[i-1]=p[i+1];
      i++;
     }while(i<=k);   
}
int main()
{
int k=0,i,j=0;
char p[30],q[30],stack[30];
printf("Infix expression:");
scanf("%s",q);
for(i=0;q[i]!='\0';i++);
q[i]=')';
stack[0]='(';
for(i=0;q[i]!='\0';i++)
{
 if(isalnum(q[i])!=0)
 {
	p[++k]=q[i];
 }
 else if(q[i]=='(')
 {
	stack[++j]=q[i];
 }
 else if(q[i]!=')')
 {
	if(stack[j]=='(')
	{
	  stack[++j]=q[i];
	}
	else if(stack[j]!='(')
	{
	 stack[++j]=q[i];
	 while(
         ((stack[j-1]=='*'||stack[j-1]=='/')&&(stack[j]=='+'||stack[j]=='-'))
         || ((stack[j-1]=='^')&&(stack[j]=='+'||stack[j]=='-'))
	 || ((stack[j-1]=='^')&&(stack[j]=='/'||stack[j]=='*'))
	 || ((stack[j-1]=='/')&&(stack[j]=='*'))
	 || ((stack[j-1]=='*')&&(stack[j]=='/'))
	 || ((stack[j-1]=='*')&&(stack[j]=='*'))
	 || ((stack[j-1]=='/')&&(stack[j]=='/'))
	 || ((stack[j-1]=='+')&&(stack[j]=='-'))
	 || ((stack[j-1]=='-')&&(stack[j]=='+'))
	 || ((stack[j-1]=='-')&&(stack[j]=='-'))
	 || ((stack[j-1]=='+')&&(stack[j]=='+'))
         )
	 {
	  p[++k]=stack[j-1];
	  stack[j-1]=stack[j];
	  --j;
	 }
	}
 }
 else if(q[i]==')')
 {
  while(stack[j]!='(')
  {
   p[++k]=stack[j];
   stack[j]=NULL;
   --j;
  }
  stack[j]=NULL;
  --j;
 } 
}
printf("Postfix expression is:\n");
for(i=1;i<=k;i++)
{
 printf("%c",p[i]);
}
printf("result after evaluation of postfix expression is\n")
for(i=1;i<=k;i++)
{
 if(isalnum(p[i]!=0)
 {
   if(p[i]=='+')
    {
     p[i-2]=p[i-2]+p[i-1];
     operation(i);
    }
   else if(p[i]=='-')
    {
     p[i-2]=p[i-2]-p[i-1];
     operation(i);
    }
   else if(p[i]=='*')
    {
     p[i-2]=p[i-2]*p[i-1];
     operation(i);
    } 
   else if(p[i]=='/')
    {
     p[i-2]=p[i-2]/p[i-1];
     operation(i);
    }
   else if(p[i]=='^')
    { 
     p[i-2]=p[i-2]^p[i-1];
     operation(i);
    }
 }
}
printf("%d",p[1]);
return 0;
}
 

 
