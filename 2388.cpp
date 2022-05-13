#include<stdio.h>
main()
{
    long long n,s,a,b;
    while(scanf("%lld",&n)==1){
        s=0;
        while(n--){
            scanf("%lld %lld",&a,&b);
            s+=a*b;
        }
        printf("%lld\n",s);
    }
}
