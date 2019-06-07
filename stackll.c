#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
int info;
struct Node *next;
}*ptr,*first,*prev_ptr,*last;

void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
	 printf("%d ",ptr->info);
	 ptr=ptr->next;
	}
}

void create(int h)
{
	 ptr=(struct Node*)malloc(sizeof(struct Node));
	 ptr->info=h;
	 ptr->next=NULL; 
	 if(first==NULL)
	 {
	   last=ptr;
	   first=ptr;
	 }
	else
	{
	 last->next=ptr;
	 last=ptr;
	}
}
void delete(struct Node *prev_ptr)
{
 ptr=prev_ptr->next;
 while(ptr->next!=NULL)
 {
  prev_ptr=ptr;
  ptr=ptr->next;
 }
 prev_ptr->next=NULL;
 free(ptr);
}

int main()
{
int x;
char ch[10];
first=NULL;
last=NULL;
do
{
 printf("\npush the element in stack:\n");
 scanf("%d",&x);
 create(x);
 printf("stack after pushing is:\n");
 display(first);
 printf("\ndo you want to push further elements?\n");
 scanf("%s",ch);
}
while(strcmp(ch,"yes")==0);
 printf("\ndo you want to pop an element?\n");
 scanf("%s",ch);
 while(strcmp(ch,"yes")==0)
{
 delete(first);
 display(first);
 printf("\ndo you want to pop further?\n");
 scanf("%s",ch);
}
printf("stack after pushing and popping is:\n");
display(first);
return 0;
}
 

 
