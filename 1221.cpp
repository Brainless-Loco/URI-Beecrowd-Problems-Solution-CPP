#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,i,a,c;
    while(scanf("%lld",&n)==1){
        while(n--){
            scanf("%lld",&a);
            c=0;
            if(a==5||a==2||a==3)
                printf("Prime\n");
            else if(a==0||a==1||a%2==0)
                printf("Not Prime\n");
            else if(a%2!=0){
                for(i=3;i<=sqrt(a);i+=2){
                    if(a%i==0){
                        printf("Not Prime\n");
                        c++;
                        break;
                    }
                }
                if(c==0)
                    printf("Prime\n");
            }
        }
    }
}
