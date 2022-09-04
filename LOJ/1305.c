#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, t, m,ax,bx,cx,dx,ay,by,cy,dy;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=ax+cx-bx;
        dy=ay+cy-by;
        printf("Case %d: %d %d %d\n",i,dx,dy,abs(ax*(by-cy)-bx*(ay-cy)+cx*(ay-by)));
    }
    return 0;
}