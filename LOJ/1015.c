#include <stdio.h>
int main()
{
    int i,t,n,x,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&x);
            if(x>0)
            {
                sum+=x;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
}
