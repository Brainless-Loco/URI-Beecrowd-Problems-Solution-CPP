#include<stdio.h>
main()
{
    int n,a,b,c;
    while(scanf("%d",&n)==1){
        c=0;
        while(n--){
            scanf("%d %d",&a,&b);
            if(a>b)
                c+=b;
        }
        printf("%d\n",c);
    }
}
