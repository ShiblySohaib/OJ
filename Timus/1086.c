#include <stdio.h>
int prime(int n)
{
    int p=1, i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            p=0;
            break;
        }
    }
    return p;
}
int main()
{
    int k,i=0,arr[15001],j=2,n;
    while(i<15000)
    {
        if(prime(j))
        {
            i++;
            arr[i]=j;
        }
        j++;
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&n);
        printf("%d\n",arr[n]);
    }
    
}
