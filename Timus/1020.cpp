#include <iostream>
#include <cmath>
#define pi 2*acos(0)
double dist(double xa, double ya, double xb, double yb)
{
    return(sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)));
}
int main()
{
    double i,n,r,cfm=0,xa,ya,xb,yb,x1,y1,totalcurve;
    std::cin>>n>>r>>xa>>ya;
    x1=xa; y1=ya;
    
    for(i=0;i<n;i++)
    {
        if(i==n-1){xb=x1;yb=y1;}
        else
        {std::cin>>xb>>yb;}
        cfm+=dist(xa,ya,xb,yb);
        xa=xb;
        ya=yb;
    }

    //ang=pi-(n-2)*pi/n;    //interior angle of n-gon = (n-2)*pi; //ang=angle inside the circle
    totalcurve=2*pi*r;
    printf("%.2lf\n",cfm+totalcurve);

    return 0;
}