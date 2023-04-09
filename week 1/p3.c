#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,n,a[10],key,l,t,c,f,jump;
    scanf("%d",&t);
    while(t)
    {
        f=0;
        c=0;
        l=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            
        }
        scanf("%d",&key);
        jump=(int)floor(sqrt(n));
        for(i=0;i<n;i=i+jump)
        {
            c++;
            if(key==a[i])
            {
                f=1;
                break;
            }
            else if(a[i]<key)
            l=i;
            else if(a[i]>key)
            break;
        }
        for(i=l;i<n;i++)
        {
            if(key==a[i])
            {
                f=1;
                break;
            }
            
        }
        if(f==1)
        printf("Present %d\n",c);
        else
        printf("Not Present %d\n",c);
        t--;
    }
    return 0;
}
