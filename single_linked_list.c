#include<stdio.h>
#include<stdlib.h>
 struct Node
{
int info;
struct Node *next;
}*ptr,*first,*prev,*p,*q;

void display(struct Node *);
int main()
{
int n,i,h;
first=NULL;
ptr=NULL;
prev=NULL;
printf("Enter the no. of elements:");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 ptr=(struct Node*)malloc(sizeof(struct Node));
	 printf("Enter the element:");
	 scanf("%d",&h);
	 ptr->info=h;
	 ptr->next=NULL; 
	 if(first==NULL)
	 {
	   prev=ptr;
	   first=ptr;
	 }
	else
	{
	 prev->next=ptr;
	 prev=ptr;
	}
	}
	display(first);
return 0;
}
void display(struct Node *q)
{
	ptr=q;
	while(ptr!=NULL)
	{
	 printf("%d ",ptr->info);
	 ptr=ptr->next;
	}
}

/*struct Node *create(int x)
{
ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->info=x;
ptr->next=NULL; 
if(first==NULL)
{
first=ptr;
//ptr->next=
}
else
{
	while(p->next!=NULL)
	{
	 p=p->next;
	 p->next=ptr;
	}
}


return(first);
}*/

	
