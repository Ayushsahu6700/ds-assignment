.//AYUSH SAHU
//CSE 11911058
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*left;
    struct node*right;
}Node;

int *make()
{
    Node*temp;
    int x;
    printf("enter data otherwise enter -1 for no data\n");
    scanf("%d",&x);
    if(x==-1)
    {printf("you have entered no data\n");
        return NULL;
    }
    temp=(Node*)malloc(sizeof(Node));
    temp->data=x;
    printf("enter left\n");
    temp->left=make();

    printf("enter rigt\n");
    temp->right=make();
    return temp;

}
int noofnodes(Node*t)
{
    if(t)
    {
        return (1+noofnodes(t->left)+noofnodes(t->right));
    }
    else{return 0;}

}
int main()
{
    Node*root;
    root=make();
    int x;
    x=noofnodes(root);
    printf("the total node is\n %d",x);
}
