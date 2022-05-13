#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,c;
    while(scanf("%lld %lld",&a,&b)==2){
        c=__gcd(a,b);
        c=2*((a/c-1)+(b/c-1));
        printf("%lld\n",4+c);
    }
}
