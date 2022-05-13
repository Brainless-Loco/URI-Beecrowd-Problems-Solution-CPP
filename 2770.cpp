#include<bits/stdc++.h>
using namespace std;
main()
{
    long long x,y,m,a,b;
    while(scanf("%lld %lld %lld",&x,&y,&m)==3){
        while(m--){
            scanf("%lld %lld",&a,&b);
            if((a<=y&&b<=x)||(b<=y&&a<=x))
                printf("Sim\n");
            else
                printf("Nao\n");
        }
    }
}
