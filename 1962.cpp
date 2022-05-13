#include<stdio.h>
main()
{
    long long a,n;
    while(scanf("%lld",&n)==1){
        while(n--){
            scanf("%lld",&a);
        if(a<2015)
            printf("%lld D.C.\n",2015-a);
        else
            printf("%lld A.C.\n",a-2014);
    }
    }
}
