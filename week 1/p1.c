#include<stdio.h>
int main()
{
    int a[20],i,c,k=0;
    printf("enter no. of cases:");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        int a[20],j,x,n,flag=0;
        printf("enter size of array:");
        scanf("%d",&n);
        printf("enter elements: ");
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        printf("enter search key: ");
        scanf("%d",&x);
        for(j=0;j<n;j++)
        {
            k++;
            if(a[j]==x)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
        {
            printf("present %d\n",k);
        }
        else
        {
            printf("not present\n",k);
        }
        
    }
}
