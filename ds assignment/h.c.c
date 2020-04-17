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
int heightoftree(node*t)
{
    int l,r,x;
    if(!t){
        return 0;
    }
    else if(!(t->left)&&!(t->right)){
        return 0;
    }
    else{
            l=heightoftree(t->left);
    r=heightoftree(t->right);
    x=l>r?l:r;
    return(1+x);

    }

}
int main()
{
    node*root=make();
    int a=heightoftree(root);
    printf("\nheight of tree is %d",a);


return 0;
}
