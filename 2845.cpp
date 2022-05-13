#include<stdio.h>
main()
{
    long long n,i,s,c;
    while(scanf("%lld",&n)==1){
        s=0;
        c=n;
        while(c--){
            scanf("%lld",&i);
            s+=i;
        }
        printf("%lld\n",s*2/n);
    }
}
