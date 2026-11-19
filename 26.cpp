#include<stdio.h>                       //program to build a binary tree
#include<stdlib.h>

typedef struct node
{
    struct node*left;
    int data;
    struct node*right;
}node;

node* buildtree()
{
    int value;
    scanf("%d",&value);

    if(value==-1)
    return NULL;

    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=value;

    printf("enter the data for the left of %d \n",value);
    newnode->left=buildtree();
    printf("enter the data for the right of %d \n",value);
    newnode->right=buildtree();

    return newnode;
}

void inordertraversal(node*root)
{
    if(root==NULL)
    return;

    inordertraversal(root->left);
    printf("%d",root->data);
    inordertraversal(root->right);
}

int main()
{
    printf("enter root value\n");
    node*root=buildtree();

    inordertraversal(root);
}