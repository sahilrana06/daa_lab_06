#include<stdio.h>
int main()
{
    int l,m;
    printf("enter no. of cases: ");
    scanf("%d",&m);
    for(l=0;l<m;l++)
    {
        int i,n,j,key,a[21],c=0,d=0,t,flag=0;
        printf("enter size of array: ");
        scanf("%d",&n);
        printf("enter elements: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            t=a[i];
            j=i-1;
            while(j>=0 && a[j]>t)
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=t;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                flag=1;
                break;
            }
        } 
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}