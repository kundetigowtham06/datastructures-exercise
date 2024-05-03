#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node * create_node(int );
struct node * create_node(int d)
{
	struct node *temp=malloc(sizeof(struct node *));
	temp->data=d;
	temp->left=NULL;
	temp->right=NULL;
	return temp; 
}
struct node * insert(struct node *,int );
struct node * insert(struct node *root,int d)
{
	if(root==NULL)
	{
		return create_node(d);
	}
	if(d<root->data)
	{
		root->left=insert(root->left,d);
	}
	if(d>root->data)
	{
		root->right=insert(root->right,d);
	}
	return root;
}
void Inorder(struct node *);
void Inorder(struct node *root)
{
	if(root->left!=NULL)
	
	Inorder(root->left);
	
	printf("%d ",root->data);
	if(root->right!=NULL)
	{
	Inorder(root->right);
	}
		
	
}
void preorder(struct node *);
void preorder(struct node *root)
{
	printf("%d ",root->data);
	if(root->left!=NULL)
	
	Inorder(root->left);
	
	
	if(root->right!=NULL)
	{
	Inorder(root->right);
	}
		
	
}
void postorder(struct node *);
void postorder(struct node *root)
{
	if(root->left!=NULL)
	
	Inorder(root->left);
	
	
	if(root->right!=NULL)
	{
	Inorder(root->right);
	}
	printf("%d ",root->data);
		
	
}
int main()
{
	struct node *root=NULL;
	root=insert(root,50);
	root=insert(root,20);
	root=insert(root,30);
	
	root=insert(root,60);
	Inorder(root);
	printf("\npostorder\n");
	postorder(root);
	printf("\npreorder\n");
	preorder(root);
	
}
