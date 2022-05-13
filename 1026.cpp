#include<stdio.h>
main()
{
    unsigned long long a,b;
    while(scanf("%llu %llu",&a,&b)==2){
        printf("%llu\n",a^b);
    }
}
