#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
int info;
struct Node *prev,*next;
}DN;
DN *ptr,*last,*first,*p,*q;

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
printf("list is created\n");
printf("do u want to enter more elements \n");
printf("if yes enter 1 else 2 \n");
scanf("%d",&y);
while(y==1)
{
          printf("\n Enter the element:\n");
	  scanf("%d",&x);
	  create(x);
	  insert(ptr);
	  display(first);
          printf("\n do u want to enter more elements \n");
	  printf("\n if yes enter 1 else 2 \n");
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
	

