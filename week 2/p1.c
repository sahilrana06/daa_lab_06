#include<stdio.h>
#include<stdlib.h>
void search (int[],int ,int );
int main()
{
    int a[20],i,j,k,c,n,m,l,key;
    printf("enter no. of cases: ");
    scanf("%d",&m);
    for(l=0;l<m;l++)
    {
        printf("enter size of array: ");
        scanf("%d",&n);
        printf("enter elements: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter search key: ");
        scanf("%d",&key);
        search(a,n,key);
    }
}
void search(int a[],int n,int key)
{
    int mid=0,low=0,high=n-1,f=0,c=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]<key)
            low=mid+1;
        else if (a[mid]==key) 
        {
            f=1;
            break;
        }
        else
            high = mid-1;
    }
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
            c++;
    }
    if(f==1)
        printf("Present  %d - %d\n",a[mid],c);
    else
        printf("Element not found\n");
}
