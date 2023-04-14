#include<stdio.h>
int merge_sort(int[],int ,int,int* ,int* );
int merge(int[],int ,int ,int,int* ,int* );
int main()
{
    int a[20],i;
    int l,m,c=0,inv=0;
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
        merge_sort(a,0,n-1,&c,&inv);
        printf("elements: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n comparisions: %d",c);
        printf("\n inversions: %d",inv);
    }
}
int merge_sort(int a[],int l,int r,int *c,int *inv)
{
    if(l<r)
    {
        int m;
        m=(l+r)/2;
        merge_sort(a,l,m,c,inv);
        merge_sort(a,m+1,r,c,inv);
        merge(a,l,m,r,c,inv);
    }
}
int merge(int a[],int l,int m,int r,int *c,int *inv)
{
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;
    int x[n1],y[n2];
    for(i=0;i<n1;i++)
    {
        x[i]=a[l+i];
    }
    for(j=0;j<n2;j++)
    {
        y[j]=a[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(x[i]<=y[j])
        {
            a[k]=x[i];
            i++;
            k++;
            (*c)++;
        }
        else
        {
            a[k]=y[j];
            j++;
            k++;
            (*c)++;
            (*inv)=(*inv)+n1-1;
        }
    }
    while (i<n1)
    {
        a[k]=x[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        a[k]=y[j];
        j++;
        k++;
    }
}
