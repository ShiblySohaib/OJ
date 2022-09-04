#include <stdio.h>
int count;
int bin(int n)
{
    if(n==0)return;
    if(n%2==1)
    count++;
    bin(n/2);
    return count;
}
int main()
{
    int i, t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
        scanf("%d",&n);
        bin(n);
        if(count%2)
        printf("Case %d: odd\n",i);
        else
        printf("Case %d: even\n",i);
    }

    return 0;
}