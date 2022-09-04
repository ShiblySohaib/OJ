#include <stdio.h>
int main()
{
    long i, t;
    long n, m;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%ld%ld", &n, &m);
        printf("Case %d: %ld\n", i, m  * n/2);
    }
    return 0;
}