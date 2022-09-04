#include <iostream>
using std::cin,std::cout,std::string;
int main()
{
    int k,i,j,tmp,sum=0;
    cin>>k;
    int a[101];
    for(i=0;i<k;i++)cin>>a[i];
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[j]<a[i])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0;i<k/2+1;i++)
    {
        sum+=a[i]/2+1;
    }
    cout<<sum<<"\n";
}
