#include <iostream>
using std::cin, std::cout,std::endl;
int main()
{
    int n,col,row,tcol,trow,count=1;
    cin>>n;
    int a[100][100];
    for(col=n-1;col>=0;col--)
    {
        for(row=0,tcol=col;row<=n-1-col;row++,tcol++)
        {
            a[row][tcol]=count;
            count++;            
        }
    }
    for(row=col+2;row<n;row++)
    {
        for(col=0,trow=row;col<n-row;col++,trow++)
        {
            a[trow][col]=count;
            count++;            
        }
    }
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            cout<<a[row][col]<<" ";          
        }
        cout<<endl;
    }

}