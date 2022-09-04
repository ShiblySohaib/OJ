#include <stdio.h>
int main()
{
    int t, i, flag;
    long long w, o, e;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        flag = 0;
        scanf("%lld", &w);
        if (w % 2 != 0)
        {
            printf("Case %d: Impossible\n", i);
            continue;
        }
        for (e = 2; e <= w / 2; e += 2)
        {
            if (w % e == 0 && w / e % 2 != 0)
            {
                printf("Case %d: %lld %lld\n", i, w / e, e);
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("Case %d: Impossible\n", i);
    }
    return 0;
}