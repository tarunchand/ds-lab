#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
int info;
struct Node *prev,*next;
}DN;
DN *ptr,*last,*first,*p,*ptr1;
void delete(DN*);
void display(DN*);
void insert(DN*);
DN* create(int);
int main()
{
int n,i,x,y;
first=NULL;
last=NULL;
ptr=NULL;
printf("Enter the no. of elements:\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
         {
	  printf("\n Enter the element:\n");
	  scanf("%d",&x);
	  create(x);
	  insert(ptr);
	  display(first);
	}
printf("\n list is created\n");
printf("do u want to delete from last more elements \n");
printf("if yes enter 1 else 2 \n");
scanf("%d",&y);
while(y==1)
{	//printf("enter i");
       // printf("%d",first->info);
printf("\n");
printf("before deletion\n");
display(first);	  
delete(first);
printf("after deletion\n");
display(first);		  
          printf("do u want to delete more elements \n");
	  printf("if yes enter 1 else 2 \n");
	  scanf("%d",&y);
}
return 0;
}
DN* create(int x)
{
ptr=(DN*)malloc(sizeof(DN));
ptr->info=x;
ptr->next=NULL;
ptr->prev=NULL;
}

void insert(DN *ptr)
{
if(first==NULL)
{
last=ptr;
first=ptr;
}
else
{
ptr->next=first;
ptr->prev=NULL;
first->prev=ptr;
first=ptr;
}
}
void display(DN *ptr)
{
ptr=first;
while(ptr!=NULL)
	{
	 printf("%d ",ptr->info);
	 ptr=ptr->next;
	}
}
void delete(DN *ptr)
{
 ptr1=first;
 if(ptr==NULL)
 {
   printf("underflow");  
 }
 else if(first->next=NULL)
 {
  free(ptr);
  first=NULL;
 }
 while(ptr->next!=NULL)
 {
   ptr=ptr->next;
 }
 ptr->prev->next=NULL;
 free(ptr);
 ptr=ptr1;
}	

