#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,x,i;
    double res,dec;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        res=(sqrt(1+8*(x-1))-1)/2.0; //got from reverse eng. n(n+1)2=sum. Here, res is n.
        dec=res-(long long int)res;
        if(dec==0)
        printf("1 ");
        else
        printf("0 ");        
    }
    printf("\n");
}
