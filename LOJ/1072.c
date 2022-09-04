#include <stdio.h>
#include <math.h>
#define pi 2 * acos(0)
int main()
{
    int t,i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        double R, n, ang;
        scanf("%lf%lf", &R, &n);
        ang = pi / n;
        printf("Case %d: %.10lf\n",i, R * sin(ang) / (1 + sin(ang)));
    }
    return 0;
}
