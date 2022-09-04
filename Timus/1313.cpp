#include <iostream>
#include <cmath>
using std::cin, std::cout,std::endl;
int main()
{
    int n,i,j,k,l;
    int a[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=i,k=0;k<=i;j--,k++)
        {
            cout<<a[j][k]<<" ";
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=n-1,k=i;k<=n-1;j--,k++)
        cout<<a[j][k]<<" ";
    }
}
