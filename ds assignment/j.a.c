//AYUSH SAHU
//CSE 11911058
#include<stdio.h>
int a[50];
void qsort(int,int);
int split(int,int);
int main()
{
 int n,i;
 printf("How many elements?");
 scanf("%d",&n);
 printf("Enter %d elements:\n",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 quicksort(0,n-1);
 printf("The resultant array:\n");
 for(i=0;i<n;i++)
   printf("%5d",a[i]);
 return 0;
}
void quicksort(int start,int end)
{
 int s;
 if(start>=end)
  return;
 s=split(start,end);
 quicksort(start,s-1);
 quicksort(s+1,end);
}
int split(int start,int end)
{
 int p=a[start];
 int i=start,j=end,temp;
 while(i<j)
 {
   while(a[i]<=p)
     i++;
   while(a[j]>p)
     j--;
   if(i<j)
     temp=a[i],a[i]=a[j],a[j]=temp;
 }
 a[start]=a[j];
 a[j]=p;
 return j;
}
