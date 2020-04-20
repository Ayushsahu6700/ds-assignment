//AYUSH SAHU
//CSE 11911058
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* insert(int data)//FUNCTION TO INSERT NODE FROM GIVEN DATA
{
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left=0;
    temp->right=0;
    return temp;
}
struct Node* MAKE(struct Node *root,int data)//FUNCTION TO CREATE NODE FROM GIVEN DATA
{
    if(root==0)
    {
        return insert(data);
    }
    else
    {
        if(data>root->data)
        {
            root->right=MAKE(root->right,data);
        }
        else if(data<root->data)
        {
            root->left=MAKE(root->left,data);
        }
    }
}
int h(struct Node *root)
{
    int l,r;
    if(root==0)
    {
        return 0;
    }
    l=h(root->left);
    r=h(root->right);
    if(l>r)
        return l+1;
    else
        return r+1;
}
void call(struct Node *root)
{
    int l,r;
    if(root==0)
    {
        return;
    }
    call(root->left);
    l=h(root->left);
    call(root->right);
    r=h(root->right);
    if((l-r)==1||(l-r)==0||(l-r)==-1)
    {
        printf("%d BALANCED NODE\n",root->data);
    }
    else if(l-r>1)
        printf("%d LEFT UNBALANCED NODE\n",root->data);
    else if(l-r<-1)
       printf("%d RIGHT UNBALANCED NODE\n",root->data);
}
int main()
{
    struct Node *root=0;
    root=MAKE(root,1);
    MAKE(root,2);
    MAKE(root,3);
    MAKE(root,4);
    MAKE(root,5);
    MAKE(root,6);
    call(root);
}
