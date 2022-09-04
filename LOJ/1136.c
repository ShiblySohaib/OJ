#include <stdio.h>
int main()
{
    int t, i, count1,count2,l,h;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        count1=count2=0;
        scanf("%d%d",&l,&h);
        count1=h/3*2+(h%3>1);
        //printf("1 = %d\n",count1);
        count2=(l-1)/3*2+((l-1)%3>1);
        //printf("2 = %d\n",count2);
        printf("Case %d: %d\n",i,count1-count2);
    }
    return 0;
}
