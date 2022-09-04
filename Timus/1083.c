#include <stdio.h>
int main()
{
    int n,i,count=0,fac=1;
    char a[20];
    scanf("%d",&n);
    getchar();
    for(i=0;i<20;i++)
    {
        a[i]='x';
    }
    gets(a);
    for(i=0;i<20;i++)
    {
        if(a[i]=='!')
        count++;
    }
    for(i=n;i>=1;i-=count)
    {
        fac=fac*i;
    }
    printf("%d\n",fac);
}
