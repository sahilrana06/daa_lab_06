#include<stdio.h>
#include<stdlib.h>
void search (int[],int ,int );
int main()
{
    int a[20],i,n,m,l,key;
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
        printf("enter differnce: ");
        scanf("%d",&key);

        int j,c=0,flag=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]-a[j]==key || a[j]-a[i]==key)
                {
                    c++;
                    flag=1;
                }
            }
        }
        if(flag==1)
            printf("no. of difference: %d\n",c);
        else
            printf("difference not found\n");
    }
}
