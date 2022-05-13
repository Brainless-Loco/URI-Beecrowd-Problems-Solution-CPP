#include<stdio.h>
main()
{
    long long a,b,c,d;
    while(scanf("%lld %lld %lld %lld",&a,&b,&c,&d)==4){
        if(a*b==c*d)
            printf("0\n");
        else if(a*b>d*c)
            printf("-1\n");
        else
            printf("1\n");
    }
}
