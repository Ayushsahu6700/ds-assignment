//AYUSH SAHU
//CSE 11911058
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*left;
    struct node*right;
}node;

node *make()
{
    node*temp;
    int x;
    printf("enter data otherwise enter -1 for no data\n");
    scanf("%d",&x);
    if(x==-1)
    {printf("you have entered no data\n");
        return NULL;
    }
    temp=(node*)malloc(sizeof(node));
    temp->data=x;
    printf("enter left\n");
    temp->left=make();

    printf("enter rigt\n");
    temp->right=make();
    return temp;

}
int noleaf(node*t)
{
    int x;
    if(!t){
        return 0;
    }
    else if(!(t->left)&&!(t->right))
    {
        return 1;
    }
    else{ return (noleaf(t->left)+noleaf(t->right));

    }
}
int nonleaf(node*t)
{if(!t)
    {
        return 0;
    }
    else if(!(t->left)&&!(t->right)){
        return 0;
    }

    else if(t){

        return (1+nonleaf(t->right)+nonleaf(t->left));
    }
}
int main()
{
    node*root=make();
    int b=noleaf(root);
    printf("\nno of leaf nodes are%d",b);
    int c=nonleaf(root);
    printf("\n no of non leaf nodes are %d",c);


}

