#include <stdio.h>
int main()
{
    int t,m,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&m,&n);
        if(m==1 || n==1)
            printf("Case %d: %d\n",i,m>n?m:n);
        else if(m==2 || n==2)
            printf("Case %d: %d\n",i,(m*n/8)*4+((m*n%8)>=4?4:m*n%8));
        else
        printf("Case %d: %d\n",i,m*n/2+(m*n%2!=0));
    }
}
