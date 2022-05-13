#include<stdio.h>
main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
        printf("%.2lf\n",a/(b+c));
    }
}
