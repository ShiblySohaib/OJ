#include <iostream>
#include <cmath>
using std::cin, std::cout,std::endl;
int count;
void check(int x,int y)
{
    if (x>=1 && y>=1 && x<=8 && y<=8)
    count++;
}
int main()
{
    int t,row,col;
    char r;
    cin>>t;
    while(t--)
    {
        count =0;
        cin>>r>>col;
        row=r-96;
        check(col-2,row+1);
        check(col-1,row+2);
        check(col-2,row-1);
        check(col-1,row-2);
        check(col+2,row+1);
        check(col+1,row+2);
        check(col+2,row-1);//
        check(col+1,row-2);
        cout<<count<<"\n";
    }
}