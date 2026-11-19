#include<stdio.h>             //Program to check a node present in a tree or not
#include<stdlib.h>

typedef struct node
{
    struct node *left;
    int data;
    struct node *right;
}node;

node* buildtree()
{
    int val;
    scanf("%d",&val);

    if(val==-1)
        return NULL;

    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=val;

    printf("enter element in the left of %d :",newnode->data);
    newnode->left=buildtree();
    printf("enter element in the right of %d :",newnode->data);
    newnode->right=buildtree();

    return newnode;
}

/*
void preordertraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void inordertraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inordertraversal(root->left);
    printf("%d ",root->data);
    inordertraversal(root->right);
}

void postordertraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    printf("%d ",root->data);
}*/

void checkpresent(node* root,int element,bool &present)
{
    if(root==NULL)
    {
        return;
    }
    if(root->data==element)
    {
        present=true;
        return;
    }
    checkpresent(root->left,element,present);
    checkpresent(root->right,element,present);
}

int main()
{
    printf("enter the node value\n");
    node*root=buildtree();

    /*
    printf("preorder traversal is\n");
    preordertraversal(root);
    printf("\n");

    printf("inorder traversal is\n");
    inordertraversal(root);
    printf("\n");

    printf("postorder traversal is\n");
    postordertraversal(root);
    */

    int element;
    printf("enter element\n");
    scanf("%d",&element);
    bool present=false;
    checkpresent(root,element,present);
    if(present)
    {
        printf("present");
    }
    else
    {
        printf("not present");
    }
}