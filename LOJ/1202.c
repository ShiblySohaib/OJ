#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, t;
    long a, b, c, d;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%ld%ld%ld%ld", &a, &b, &c, &d);
        if ((a + b) % 2 == (c + d) % 2)
        {
            if (abs(a - c) == abs(b - d))
                printf("Case %d: 1\n", i);
            else
                printf("Case %d: 2\n", i);
        }
        else
            printf("Case %d: impossible\n", i);
    }

    return 0;
}