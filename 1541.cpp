#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d;
    while(scanf("%d",&a)==1){
        if(a==0)
            break;
        else{
            scanf("%d %d",&b,&c);
            d=a*b*100/c;
            d=sqrt(d);
            printf("%d\n",d);
        }
    }
}
