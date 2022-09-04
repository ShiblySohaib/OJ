#include <stdio.h>
int main()
{
    int i, t;
    double va,vb,v,aa,ab;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lf%lf%lf%lf%lf",&va,&vb,&v,&aa,&ab);
        printf("Case %d: %lf %lf\n",i,va*va/2/aa+vb*vb/2/ab,(va/aa>vb/ab?va/aa:vb/ab)*v);
    }
    return 0;
}