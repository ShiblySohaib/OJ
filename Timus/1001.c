#include<stdio.h>
#include<math.h>
int main()
{
    long long *arr;
    int i=0;
    arr=(long long*)malloc(2<<20);
    while(scanf("%lld",&arr[i])!=EOF)
    {
        i++;
    }
    while(i)
    {
        printf("%.4lf\n",sqrt(arr[i-1]));
        i--;
    }
    return 0;
}