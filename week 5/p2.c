#include <stdio.h>
#include <stdlib.h>
int AK(int [],int,int);
int main(void)
{
    int t,n,i,k;
    printf("Enter no. of Test cases: ");
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        printf("Enter The Size of The Array: ");
        scanf("%d",&n);
        int arr[n];
        printf("Enter element: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter The Key Element: ");
        scanf("%d",&k);
        k=AK(arr,n,k);
        if(k==-1)
        {
            printf("No sequence found \n");
        }
    }
    return 0;
}
int AK(int arr[],int n,int k)
{
    int i,j,c=-1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                printf("%d %d \n",arr[i],arr[j]);
                exit(0);
            }
        }
    }
    return c;
}
