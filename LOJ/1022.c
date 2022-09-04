#include <stdio.h>
int main()
{
    int t,i;
    double r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        printf("Case %d: %.2lf\n",i,4.0*r*r-acos(0.0)*2.0*r*r);
    }

    return 0;
}
