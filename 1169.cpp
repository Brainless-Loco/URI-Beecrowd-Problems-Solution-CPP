#include<stdio.h>
main()
{
    unsigned long long n,i,a,s,c;
    while(scanf("%llu",&n)==1){
        while(n--){
            scanf("%llu",&a);
            s=1;
            c=1;
            for(i=1;i<a;i++){
                c*=2;
                s+=c;
            }
            s=s/12;
            s=s/1000;
            printf("%llu kg\n",s);
        }
    }
}
