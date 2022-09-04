#include <iostream>
#include<cmath>
using std::cin,std::cout;
int dsum(int n,int x)
{
    int sum1=0,sum2=0;
    while(x--)
    {
        sum1+=n%10;
        n/=10;
    }
    while(n!=0)
    {
        sum2+=n%10;
        n/=10;
    }
    return sum1==sum2;
}
int main()
{
    int d,i,count=0;
    cin>>d;
    for(i=0;i<pow(10,d);i++)
    {
        count+=dsum(i,d/2);
    }
    cout<<count<<"\n";
}
