#include<stdio.h>
int main()
{
    int l,m;
    printf("enter no. of cases: ");
    scanf("%d",&m);
    for(l=0;l<m;l++)
    {
        int i,n,j,key,a[21],c=0,d=0,t,x;
        printf("enter size of array: ");
        scanf("%d",&n);
        printf("enter elements: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            x=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[x])
                {
                    x=j;
                }
                c++;
            }
            d++;
            if(x!=i)
            {
                t=a[x];
                a[x]=a[i];
                a[i]=t;
            }
        }
        printf("no.of comparisions: %d\n",c);
        printf("no.of swaps: %d",d);
    }
}