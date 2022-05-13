#include<stdio.h>
main()
{
    long long n,a,b;
    while(scanf("%lld",&n)==1){
        while(n--){
            scanf("%lld %lld",&a,&b);
            if(a%b==0)
                printf("%lld\n",a/b);
            else
                printf("%lld\n",(a/b)+1);
        }
    }
}
