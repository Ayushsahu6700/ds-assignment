//AYUSH SAHU
//CSE 11911058
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head;
void create()
{   int n,x;
    printf("enter the no of terms\n");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of first node\n");
    scanf("%d",&x);
    head->data=x;
    head->next=NULL;
    head->prev=NULL;
    struct node*temp=head;
    for(int i=2;i<=n;i++)
    {
        int y;
        printf("enter the data of node\n");
        scanf("%d",&y);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=y;
        newnode->prev=temp;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}
void traverse()
{
    printf("the series is\n");
    struct node*temp=head;
    while(temp)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void delany()
{
    int a;
    printf("enter the term you want to delete\n");
    scanf("%d",&a);
    struct node*temp=head;
    if(head->data==a){

        head=head->next;
        head->prev=NULL;
        free(temp);
    }
   else{while(temp->next->data!=a)
    {
        temp=temp->next;

    }
    struct node*t;
    t=temp->next;
    temp->next=t->next;
    t->prev=temp;
    free(t);}


}
int main()
{
    create();
    traverse();
    delany();
     traverse();
    return 0;
}

