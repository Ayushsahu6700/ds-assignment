//AYUSH SAHU
//CSE 119111058
#include<stdio.h>
int main()
{
    int i,j,n,arr[45],swap;
    printf("enter no of elements you want to sort\n");
    scanf("%d",&n);
    printf("enter the elemennts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        j=i;
        while(j>=0&&arr[j]>arr[j+1])
        {
            swap=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=swap;
        j--;}

    }
    printf("required series is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

