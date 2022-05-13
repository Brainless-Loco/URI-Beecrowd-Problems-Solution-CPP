#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926535897
main()
{
    double a[3],c,v,r,x,s,y,p;
    while(scanf("%lf %lf %lf",&a[0],&a[1],&a[2])!=EOF){
        p=(a[0]+a[1]+a[2])/2;
        s=sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
        y=((a[0]*a[1]*a[2])/(4*s));
        c=(pi*y*y)-s;
        r=s/p;
        r=pi*r*r;
        s=s-r;
        printf("%.4lf %.4lf %.4lf\n",c,s,r);
    }
}
