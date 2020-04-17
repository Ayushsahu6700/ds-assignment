//AYUSH SAHU
//CSE 11911058
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}*head;
void create()
{
    int n,x;
    printf("enter the no of nodes\n ");
    scanf("%d",&n);
    printf("enter the data of first node\n ");
    scanf("%d",&x);
    head=(struct node*)malloc(sizeof(struct node));
    head->data=x;
    head->link=NULL;
    struct node*temp=head;
    for(int i=2;i<=n;i++)
    {int a;
    printf("enter the data of new node\n");
    scanf("%d",&a);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=a;
        newnode->link=NULL;
        temp->link=newnode;
        temp=temp->link;
    }

}
void traverse()
{
    struct node*temp=head;
    while(temp)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}
void deleteany()
{
    int y;
    printf("enter the value you want to delete\n");
    scanf("%d",&y);
     struct node*temp=head;
     if(head->data==y){
        head=head->link;
        free(temp);
     }
    else{while(temp->link->data!=y)
    {
        temp=temp->link;
    }
    struct node*t=temp->link;
    temp->link=temp->link->link;
    free(t);}
}
void main()
{
    create();
    printf("\n THE SERIES IS\n");
    traverse();
    deleteany();
    printf("\n THE DELETED SERIES IS\n");
    traverse();
}

