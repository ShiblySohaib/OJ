#include <stdio.h>
int main()
{
    int a, i, sum;
    scanf("%d", &a);
    if (a < 1)
    {
        a*=-1;
        sum = (a * (a + 1))/2;
        sum=-1*(sum-1);
    }
    else
    {
        sum = (a * (a + 1))/2;
    }
    printf("%d\n",sum);
}
