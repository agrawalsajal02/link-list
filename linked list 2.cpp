#include<stdio.h>
#include<stdlib.h>
void insertatend(int data);
void printList();
void insertatbeg(int data);
void reversenode();
struct node{
	int data;
  struct node *next;
};
struct node *head=NULL;

void printList() {

   struct node *ptr = head;

   printf("\n[head] =>");
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}void insertatend(int data)
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	p->data=data;
	p->next=NULL;
	if(head==NULL)
	{
	head=p;
	}
	else
	{
		struct node *link;
		link=head;
		while(link->next!=NULL)
		{
			link=link->next;
		}
		link->next=p;
	}
	
}
void insertatbeg(int data){
	struct node *p=(struct node *)malloc(sizeof(struct node));
	p->data=data;
	p->next=head;
	head=p;
	}
	void reversenode()
{
	struct node *temp,*prevtemp,*next;
	temp=head;
	prevtemp=NULL;
	
	while(temp!=NULL)
	{
		next=temp->next;
		temp->next=prevtemp;
		prevtemp=temp;
		temp=next;
	}
	head=prevtemp;

	}

int main()
	{
	int i=1,j,k;
while(i==1)
{
	int n;
	scanf("%d",&n);
	insertatend(n);
	printf("do you want to enter more , for yes i=1 , for no i=0");
	scanf("%d",&i);
}

reversenode();
printList();




}
