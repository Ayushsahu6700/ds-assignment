//AYUSH SAHU
//CSE 119111058
#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max],f=-1,r=-1;
void insertfromr()
{
    printf("enter th element you want to insert\n ");
    int x;
    if(r==(max-1))
    {
        printf("queue is full\n");
        return ;
    }
    scanf("%d",&x);
    r=r+1;
     a[r]=x;
    printf("inserted the element\n");
}
void delfromr()
{
    if(r==-1||r==f)
    {
        printf("empty\n");
        return;
    }
    r=r-1;
    printf("value is deleted\n");

}
void insertfromf()
{
     printf("enter th element you want to insert\n ");
    int x;
    if(f==-1)
    {
        printf("it cant be inserted\n");
        return;
    }
    scanf("%d",&x);
    f=f-1;
    a[f]=x;
     printf("inserted the element\n");
}
void delfromf()
{
    if(f==(max-1)||r==f)
    {
         printf("empty\n");
        return;
    }
     f=f+1;
     printf("value is deleted\n");

}
void display()
{
    int i;
    if(f==r)
    {
        printf("empty\n");
    }
    else
    {
        printf("queue is:\n");
        for(i=f;i<=r;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");

    }

}
void main()
{
    int choice;
    while(1){
    printf("enter choice\n");
    printf("1 for insert from rear\n");
    printf("2 for deletee from rear\n");
    printf("3 for insert from front\n");
    printf("4 for delete from front\n");
    printf("5 for display\n");
    printf("6 for exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insertfromr();
        break;
    case 2:
        delfromr();
        break;
    case 3:
        insertfromf();
        break;
    case 4:
       delfromf();
       break;
    case 5:
        display();
        break;
    case 6:
        exit(1);
        }

}}
