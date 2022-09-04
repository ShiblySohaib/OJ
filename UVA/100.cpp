#include<iostream>
int count;
int algo(int n)
{
    count++;
    if(n==1)return 1;
    if(n%2)
    algo(3*n+1);
    else
    algo(n/2);
    return count;
}
int main()
{
    int x,y,i,max,res,h,l;
    while(std::cin>>x>>y)
    {
        if(x>y){h=x;l=y;}
        else {h=y;l=x;}
        max=0;
        for(i=l;i<=h;i++)
        {
            count=0;
            res=algo(i);
            if(res>max)max=res;
            std::cout<<i<<" = "<<count<<"\n";
        }
        std::cout<<x<<" "<<y<<" "<<max<<"\n";
    }
}