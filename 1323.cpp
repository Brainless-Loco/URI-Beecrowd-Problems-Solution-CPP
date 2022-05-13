#include<stdio.h>
main()
{
    long long a,s,i;
    while(scanf("%lld",&a)==1){
        if(a==0)
            break;
        s=0;
        for(i=1;i<=a;i++)
            s+=i*i;
        printf("%lld\n",s);
    }
}
