#include <stdio.h>
#include <math.h>
#define pi 2*acos(0)
int main()
{
    int i, t;
    double ra,rb,rc,s,triangle,area,a,b,c,aa,ab,ac;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lf%lf%lf",&ra,&rb,&rc);
        s=ra+rb+rc;
        a=rb+rc;
        b=ra+rc;
        c=rb+ra;
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        aa=.5*ra*ra*acos((b*b+c*c-a*a)/(2*b*c));
        ab=.5*rb*rb*acos((a*a+c*c-b*b)/(2*c*a));
        ac=.5*rc*rc*acos((b*b+a*a-c*c)/(2*b*a));
        printf("Case %d: %lf\n",i,triangle-aa-ab-ac);
    }
    return 0;
}