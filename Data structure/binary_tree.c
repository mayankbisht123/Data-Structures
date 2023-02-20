#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
void preorder(struct node* root)
{
if(root!=NULL)
{
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
}
struct node *create()
{
    int x;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data or enter -1 for no node\n");
    scanf("%d",&x);
    if(x==-1)
        return 0;
    else
    {
        newnode->data=x;
        printf("Enter the left child of %d\n",x);
        newnode->left=create();
        printf("Enter the right child of %d\n",x);
        newnode->right=create();
        return newnode;
    }
};
int main()
{
    struct node *root=NULL;
    root=create();
    preorder(root);
    return 0;
}

