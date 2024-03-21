#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
void create_node(struct node**tail,int d);
void create_node(struct node**tail,int d)
{
struct node*temp=malloc(sizeof(struct node*));
temp->data=d;
temp->next=temp;
*tail=temp;
}
void display(struct node*tail);
void display(struct node*tail){
struct node*ptr=tail->next;
do{
printf("%d",ptr->data);
ptr=ptr->next;
}
while(ptr!=tail->next);
}
void insert_at_beginning(struct node*tail,int d);
void insert_at_beginning(struct node*tail,int d)
{
struct node*temp=malloc(sizeof(struct node*));
temp->data=d;
temp->next=NULL;
temp->next=tail->next;
tail->next=temp;
}
void insert_at_end(struct node**tail,int d);
void insert_at_end(struct node**tail,int d){
struct node*temp=malloc(sizeof(struct node*));
temp->data=d;
temp->next=NULL;

temp->next=(*tail)->next;
(*tail)->next=temp;

(*tail)=temp;
}
int main(){
struct node*tail=NULL;
create_node(&tail,10);
display(tail);
insert_at_beginning(tail,20);
display(tail);
insert_at_end(&tail,40);
display(tail);

}


    
