#include<stdio.h>
#include<stdlib.h>
void search (int[],int ,int );
int main()
{
    int n,m,a[10],key;
    printf("No of cases: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        printf("enter size of array: ");
        scanf("%d",&n);
        printf("enter elements: ");
        for(int j=0;j<n;j++)
        scanf("%d",&a[j]);
        printf("Enter the element to search: ");
        scanf("%d",&key);
        search(a,n,key);
    }
    return 0;
}
void search(int a[],int n,int key)
{
    int mid=0,low=1,high=n,f=0;
    while(low<=high)
    {
        mid =(low+high)/2;
        if(a[mid]==key)
        {
            printf("Present  %d",mid);
            f=1;
            break;
        }
        else if(key<a[mid])
        high=mid;
        else
        low=mid+1;
    }
    if(f==0)
    {
        printf("Element not present");
    }
}
