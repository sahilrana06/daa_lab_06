#include<stdio.h>

int partition(int a[],int l,int h)
{
    int i=l-1;
    int j,t;
    int piv=a[h];
    for(j=l;j<h;j++)
    {
        if(a[j]<=piv)
        {
            i++;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    t=a[i+1];
    a[i+1]=a[h];
    a[h]=t;
    return i+1;
}

int quick_sort(int a[],int l,int h,int k)
{
    if(l<h)
    {
        int piv_index;
        piv_index=partition(a,l,h);
        if(piv_index==k)
            a[piv_index];
        quick_sort(a,l,piv_index-1,k);
        quick_sort(a,piv_index+1,h,k);
    }
}

int main()
{
    int a[20],i,k=0;
    int l,m,t,e;
    printf("enter no. of cases: ");
    scanf("%d",&m);
    for(l=0;l<m;l++)
    {
        int i,n,j,a[21];
        printf("enter size of array: ");
        scanf("%d",&n);
        printf("enter elements: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter value of k: ");
        scanf("%d",&k);
        e=quick_sort(a,0,n-1,k);
        printf("elements: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n kth smallest element: %d\n",e);
    }
}
