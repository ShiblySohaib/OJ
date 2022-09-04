#include <stdio.h>
int main()
{
    int i,n,t,j,lx,ly,lz,rx,ry,rz,x,y,z,xx,yy,zz;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        x=y=z=1;
        xx=yy=zz=1000;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d%d%d",&lx,&ly,&lz);
            if(lx>x)x=lx;
            if(ly>y)y=ly;
            if(lz>z)z=lz;
            scanf("%d%d%d",&rx,&ry,&rz);
            if(rx<xx)xx=rx;
            if(ry<yy)yy=ry;
            if(rz<zz)zz=rz;            
        }
        if(xx<=x || yy<=y || zz<=z)
        printf("Case %d: 0\n",i);
        else
        printf("Case %d: %d\n",i,(xx-x)*(yy-y)*(zz-z));
    }
    return 0;
} 
