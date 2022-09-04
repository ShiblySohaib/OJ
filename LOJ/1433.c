#include <stdio.h>
#include <math.h>
int main()
{
    int i, t, ox,oy,ax,ay,bx,by;
    double ang,oa,x;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d%d%d%d%d%d",&ox,&oy,&ax,&ay,&bx,&by);
        oa=sqrt((ax-ox)*(ax-ox)+(ay-oy)*(ay-oy));
        ax-=ox; ay-=oy; bx-=ox; by-=oy;
        x=(ax*bx+ay*by)/(oa*oa);                 // Used vector dot product to get angle
        if(x>1)x=1; if(x<-1)x=-1;                // Fixed rounding error
        ang=acos(x);                              
        printf("Case %d: %lf\n",i,oa*ang);
    }
    return 0;
}
