#include<stdio.h>

int partition(int a[],int l,int h,int *c,int *x)
{
    int i=l-1;
    int j,t;
    int piv=a[h];
    for(j=l;j<h;j++)
    {
        (*c)++;
        if(a[j]<=piv)
        {
            i++;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            (*x)++;
        }
    }
    t=a[i+1];
    a[i+1]=a[h];
    a[h]=t;
    (*x)++;
    return i+1;
}

void quick_sort(int a[],int l,int h,int *c,int *x)
{
    if(l<h)
    {
        int piv_index;
        piv_index=partition(a,l,h,c,x);
        quick_sort(a,l,piv_index-1,c,x);
        quick_sort(a,piv_index+1,h,c,x);
    }
}

int main()
{
    int a[20],i,x=0;
    int l,m,c=0,t;
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
        quick_sort(a,0,n-1,&c,&x);
        printf("elements: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n comparision: %d\n",c);
        printf("swaps: %d",x);
    }
}
