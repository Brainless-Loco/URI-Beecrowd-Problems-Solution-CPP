#include<stdio.h>
main()
{
    int n,a,c;
    while(scanf("%d",&n)==1){
        c=0;
        while(n--){
            scanf("%d",&a);
            if(a!=1)
                c++;
        }
        printf("%d\n",c);
    }
}
