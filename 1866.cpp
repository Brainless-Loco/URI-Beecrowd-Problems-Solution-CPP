#include<stdio.h>
main()
{
    int t,a;
    while(scanf("%d",&t)==1)
    {
        while(t--){
            scanf("%d",&a);
            if(a%2==0)
                printf("0\n");
            else
                printf("1\n");
        }
    }
}
