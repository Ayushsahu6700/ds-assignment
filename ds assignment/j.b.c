//AYUSH SAHU
//CSE 11911058
#include<stdio.h>
int main()
{
    int i,j,swap,min,arr[50],n;
    printf("enter no of elements you want to sort\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        swap=arr[min];
        arr[min]=arr[i];
        arr[i]=swap;
    }
    printf("resultant array;\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

