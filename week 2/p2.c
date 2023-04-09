#include<stdio.h>
int main()
{
    int a[20],i,j,k,c,n,m,l,key,flag=1;
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
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[i]+a[j]==a[k])
                    {
                        printf("index i= %d j= %d k= %d\n",i+1,j+1,k+1);
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag==1)
            printf("no sequence found\n");
    }
}
