#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
void display(struct node*head);
int count_of_nodes(struct node*head);
void insert_at_end(struct node*head,int d);
void display(struct node*head)
{
if(head==NULL)
{
printf("LIST IS EMPTY");
return;
}
struct node*ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr = ptr->next;
}
return;
}
int count_of_nodes(struct node*head)
{
int count=0;
{
if(head==NULL)
{
return 0;
}
struct node*ptr=head;
while(ptr!=NULL)
{
count++;
ptr = ptr->next;
}
}
return count;
}
void insert_at_end(struct node*head,int d)
{
struct node*temp=malloc(sizeof(struct node*));
temp->data=d;
temp->next=NULL;
struct node*ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}













int main()
{
int size;
struct node*head = NULL;
head =malloc(sizeof(struct node*));
head->data=10;
head->next=NULL;
struct node*curent;
curent=malloc(sizeof(struct node*));
curent->data=20;
curent->next=NULL;
head->next=curent;
display(head);
size=count_of_nodes(head);
printf("SIZE=%d",size);
insert_at_end(head,40);
display(head);
count_of_nodes(head);
return 0;
}


