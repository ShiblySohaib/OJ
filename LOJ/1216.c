#include <stdio.h>
#define PI 2*acos(0)
int main()
{
    int i,n,t;
    double R,r,rr,h,p,rate;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&R,&r,&h,&p);
        rate = (R-r)/h;
        rr=r+rate*p;
        printf("Case %d: %lf\n",i,1.0/3*PI*p*(r*r+rr*rr+rr*r));
    }
    return 0;
} 