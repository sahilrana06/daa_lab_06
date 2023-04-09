#include<stdio.h>
int binarysearch(int a[],int l,int h,int key)
{
    int mid=(l+h)/2;
    if(a[mid]==key)
        return 1;
    else if(key>a[mid])
        return binarysearch(a,mid+1,h,key);
    else if(key<a[mid])
        return binarysearch(a,l,mid-1,key);
    else
        return 0;
}
int main()
{
    int a[20],i,n,key,flag=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter search key: ");
    scanf("%d",&key);
    flag=binarysearch(a,0,n-1,key);
    if (flag==1)
    {
        printf("present\n");
    }
    else
    {
        printf("not present\n");
    }
}
