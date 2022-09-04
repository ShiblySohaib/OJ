#include <stdio.h>
int main()
{
    int t,i,xa,xb,ya,yb,n,x,y;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d%d%d%d%d",&xa,&ya,&xb,&yb,&n);
        printf("Case %d:\n",i);
        while(n--)
        {
            scanf("%d%d",&x,&y);
            if(x>xa && y>ya && x<xb && y<yb)
            printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}