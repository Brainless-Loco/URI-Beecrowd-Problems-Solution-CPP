#include<stdio.h>
main()
{
    int a,b,n;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("%d %d",&a,&b);
            if(a<b)
                printf("%d\n",a);
            else
                printf("%d\n",a/b+a%b);
        }
    }
}
