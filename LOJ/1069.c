#include <stdio.h>
int main()
{
    int t,me,i,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&me,&p);
        printf("Case %d: %d\n",i,19+4*(me+(me-p)*((me>=p)-(me<=p))));
    }
    return 0;
}