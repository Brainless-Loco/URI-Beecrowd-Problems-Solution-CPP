#include<stdio.h>
main()
{
    int n,a,b;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("%d %d",&a,&b);
            printf("%d cm2\n",(a*b)/2);
        }
    }
}
