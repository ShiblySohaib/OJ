#include <stdio.h>
int main()
{
    long sum ,t, i, a[3], h,j;
    
    scanf("%ld", &t);
    for (i = 1; i <= t; i++)
    {
        sum=0;
        h=0;
        for(j=0;j<3;j++)
        {
            scanf("%ld",&a[j]);
            h=a[j]>h?a[j]:h;
        }
        for(j=0;j<3;j++)
        {
            if(a[j]!=h)
            {
                sum+=a[j]*a[j];
            }
        }
        if(h*h==sum)
        printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }

    return 0;
}