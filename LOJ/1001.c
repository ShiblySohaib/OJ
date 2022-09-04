#include<stdio.h>
int main()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n<10)
            printf("0 %d\n",n);
        else
            printf("10 %d\n",n-10);
    }
}
