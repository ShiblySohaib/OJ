#include <stdio.h>
#include <math.h>
int main()
{
    long long int t, l, i, x, row, col;
    double tmp;
    scanf("%lld", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%lld", &x);
        tmp = sqrt(x);
        if (tmp - (int)tmp == 0)
            l = sqrt(x);
        else
            l = sqrt(x) + 1;
        if ((l * l) % 2 == 0)
        {
            if (l * l - x < l)
            {
                col=l;
                row=l*l-x+1;                
            }
            else
            {
                col=x-(l-1)*(l-1);
                row=l;
            }
        }
        else
        {
            if (l * l - x < l)
            {
                col = l * l - x + 1;
                row = l;
            }
            else
            {
                col = l;
                row = x - (l - 1) * (l - 1);
            }
        }
        printf("Case %lld: %lld %lld\n", i, col, row);
    }
}
