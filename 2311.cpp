#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    char c[20];
    double a[7],b,d;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("\n");
            scanf("%s",&c);
            b=0;
            scanf("%lf",&d);
            for(i=0;i<7;i++){
                scanf("%lf",&a[i]);
                b+=a[i];
            }
            sort(a,a+7);
            b-=a[0]+a[6];
           printf("%s %.2lf\n",c,b*d);
        }
    }
}
